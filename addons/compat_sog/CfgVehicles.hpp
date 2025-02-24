#define STATICLINE EGVAR(staticLine,enabled) = 1; \
EGVAR(staticLine,condition) = QUOTE(true)

class CfgVehicles {
    class vn_b_backpack_base;
    class vn_b_pack_ba18_01: vn_b_backpack_base {
        GVARMAIN(isParachute) = 1;
    };

    class vn_o_backpack_base;
    class vn_o_pack_parachute_01: vn_o_backpack_base {
        GVARMAIN(isParachute) = 1;
    };

    class vn_air_ch47_04_base;
    class vn_b_air_ch47_04_01: vn_air_ch47_04_base {
        GVARMAIN(passengerTurrets)[] = {
            {1}, {2}
        };
        GVARMAIN(rampAnims)[] = {{"ramp", 0, 1}};

        EGVAR(staticLine,enabled) = 1;
        EGVAR(staticLine,condition) = QUOTE(true);
    };
    class vn_b_air_ch47_04_02: vn_air_ch47_04_base {
        GVARMAIN(passengerTurrets)[] = {
            {1}, {2}
        };
        GVARMAIN(rampAnims)[] = {{"ramp", 0, 1}};

        EGVAR(staticLine,enabled) = 1;
        EGVAR(staticLine,condition) = QUOTE(true);
    };

    class vn_air_ch47_01_base;
    class vn_b_air_ch47_01_01: vn_air_ch47_01_base {
        GVARMAIN(passengerTurrets)[] = {
            {1}, {2}
        };
        GVARMAIN(rampAnims)[] = {{"ramp", 0, 1}};

        EGVAR(staticLine,enabled) = 1;
        EGVAR(staticLine,condition) = QUOTE(true);
    };

    class vn_b_air_ch47_01_02: vn_air_ch47_01_base {
        GVARMAIN(passengerTurrets)[] = {
            {1}, {2}
        };
        GVARMAIN(rampAnims)[] = {{"ramp", 0, 1}};

        EGVAR(staticLine,enabled) = 1;
        EGVAR(staticLine,condition) = QUOTE(true);
    };
};