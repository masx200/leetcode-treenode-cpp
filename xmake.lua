set_policy("platform.longpaths", true)
set_version("1.1.4")
add_rules("mode.debug", "mode.release")
add_requires("vcpkg::cppunit")
set_languages("c17", "cxx20")
set_project("leetcode-treenode-cpp")
target("leetcode-treenode-cpp")
-- 如果当前编译模式是debug
if is_mode("debug") then

    -- 添加DEBUG编译宏
    add_defines("_DEBUG")

end
set_kind("static")

add_files("*.ixx", {install = true})

target_end()
target("test")
if is_mode("debug") then

    -- 添加DEBUG编译宏
    add_defines("_DEBUG")

end
set_group("test")
set_default(false)
set_kind("binary")
add_files("*.cpp")

add_packages("vcpkg::cppunit")
add_deps("leetcode-treenode-cpp")
target_end()
