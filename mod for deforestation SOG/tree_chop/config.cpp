class CfgPatches {
    class tree_chop {
        name = "Tree Chop Tool System";
        author = "Rufy & Spoffy";
        url = "https://your-mod-page-or-github-if-any";

        requiredAddons[] = {"cba_main"};  // Ensures CBA loads first
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        version = "1.0";
        versionStr = "1.0";
        versionAr[] = {1, 0, 0};
    };
};

class CfgFunctions {
    class para_c {
        class tools {
            file = "\tree_chop\functions\client\functions\tools";
            class operate_axe {};
            class tool_controller_init {
                postInit = 1;  // Automatically runs after client init
            };
        };
    };

    class para_g {
        class tools {
            file = "\tree_chop\functions\global\functions\tools";
            class is_valid_axe_target {};
        };
    };

    class para_s {
        class tools {
            file = "\tree_chop\functions\server\functions\tools";
            class fell_tree {};
        };
    };
};