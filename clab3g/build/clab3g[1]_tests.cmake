add_test([=[Newton.n]=]  /workspaces/PLUSIi/clab3g/build/clab3g [==[--gtest_filter=Newton.n]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Newton.n]=]  PROPERTIES WORKING_DIRECTORY /workspaces/PLUSIi/clab3g/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  clab3g_TESTS Newton.n)
