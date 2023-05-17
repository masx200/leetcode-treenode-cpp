-- 如果当前编译模式是test
if is_mode("test") then add_requires("vcpkg::eventpp") end
set_policy("platform.longpaths", true)
set_version("1.1.4")

add_requires("vcpkg::cppunit")
set_languages("c17", "cxx20")
set_project("leetcode-treenode-cpp")
target("leetcode-treenode-cpp")
-- 如果当前编译模式是test
if is_mode("test") then

    -- 添加test编译宏
    add_defines("__TEST__")
    add_packages("vcpkg::eventpp")
end
set_kind("static")

add_files("*.ixx", {install = true})

target_end()
target("leetcode-treenode-cpp-test")
if is_mode("test") then

    -- 添加test编译宏
    add_defines("__TEST__")
    add_packages("vcpkg::eventpp")
end
set_group("test")
set_default(false)
set_kind("binary")
add_files("*.cpp")

add_packages("vcpkg::cppunit")
add_deps("leetcode-treenode-cpp")
target_end()
