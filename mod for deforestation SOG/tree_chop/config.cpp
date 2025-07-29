class CfgPatches {
    class tree_chop {
        name = "Tree Chop Tool System";
        author[] = { "Rufy", "Spoffy", "Savage Game Design" };
        url = "";

        requiredAddons[] = { "cba_main" };  // Only depend on CBA + Ace for some fucking reason, dont question this shit just publish and add ace as extra in steam.
        requiredVersion = 1.0;
        units[] = {};
        weapons[] = {};
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
                postInit = 1;  // Auto-executes on mission start
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
