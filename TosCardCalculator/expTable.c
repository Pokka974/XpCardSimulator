#include <stdio.h>
#include <stdlib.h>

long expTab(int currentLvl)
{
    const long TAB[301] =
        {
            0,
            8,
            280,
            742,
            1444,
            2434,
            3760,
            5451,
            7651,
            10291,
            13411,
            17051,
            21251,
            26051,
            31457,
            37541,
            39296,
            43806,
            50944,
            60709,
            73211,
            88499,
            106655,
            127802,
            152498,
            180512,
            211892,
            246736,
            285200,
            327374,
            373410,
            423390,
            478140,
            537090,
            600384,
            668087,
            740339,
            817280,
            898965,
            985530,
            1078140,
            1175936,
            1278960,
            1387344,
            1501122,
            1620522,
            1628274,
            1647909,
            1678083,
            1718304,
            1768476,
            1828366,
            1898056,
            1977616,
            2066985,
            2167147,
            2277383,
            2397965,
            2528909,
            2670219,
            2822151,
            2984827,
            3158499,
            3344481,
            3541740,
            3750377,
            3970632,
            4202598,
            4446362,
            4702156,
            4970212,
            5252260,
            5546930,
            5854290,
            6174564,
            6507812,
            6854254,
            7214110,
            7587430,
            7976680,
            8379705,
            8796717,
            9227928,
            9673550,
            10133612,
            10608507,
            10629264,
            10681324,
            10760620,
            10865574,
            10995130,
            11148778,
            11326178,
            11527168,
            11752463,
            12001277,
            12273395,
            12568795,
            12887656,
            13229936,
            13595581,
            13984963,
            14399881,
            14838697,
            15301545,
            15788553,
            16299843,
            16835764,
            17396192,
            17981472,
            18594268,
            19232196,
            19895586,
            20584526,
            21299344,
            22040120,
            22806924,
            23600080,
            24422864,
            25272456,
            26148916,
            27052556,
            27983684,
            28942348,
            29928856,
            30943244,
            31989654,
            33064354,
            34167644,
            35299828,
            36461200,
            37651780,
            38871864,
            40121464,
            41405296,
            42719296,
            42816608,
            43059920,
            43429144,
            43915744,
            44514912,
            45225560,
            46043100,
            46965776,
            47992384,
            49121688,
            50353024,
            51685376,
            53118960,
            54657800,
            56297240,
            58037104,
            59877512,
            61818240,
            63859708,
            66001648,
            68244448,
            70595072,
            73047208,
            75601184,
            78256992,
            81015296,
            83876048,
            86839544,
            89906408,
            93085840,
            96369776,
            99758096,
            103251760,
            106850624,
            110555648,
            114367024,
            118285320,
            122321552,
            126465680,
            130718240,
            135079776,
            139550800,
            144131872,
            148823088,
            153625376,
            158551472,
            163589840,
            168740992,
            174005024,
            179382800,
            179603600,
            180154336,
            180990672,
            182091200,
            183443760,
            185039680,
            186872976,
            188938432,
            191232768,
            193752640,
            196501968,
            199472928,
            202663680,
            206073120,
            209700176,
            213543680,
            217602880,
            221877424,
            226377168,
            231091904,
            236021168,
            241164912,
            246523104,
            252096096,
            257883328,
            263885584,
            270116352,
            276562720,
            283224896,
            290103136,
            297197696,
            304509248,
            312037952,
            319784512,
            327765920,
            335966784,
            344386784,
            353026976,
            361887968,
            370970304,
            380274528,
            389801248,
            399570848,
            409564352,
            419782752,
            430226528,
            440896672,
            451793184,
            462917504,
            474292608,
            474684544,
            475660288,
            477137056,
            479078784,
            481462208,
            484272096,
            487496128,
            491132384,
            495167168,
            499593984,
            504408288,
            509605472,
            515182432,
            521136000,
            527463488,
            534174560,
            541256256,
            548706752,
            556524800,
            564708992,
            573258048,
            582171520,
            591448704,
            601106368,
            611127488,
            621511616,
            632258752,
            643368384,
            654840640,
            666675520,
            678872960,
            691455424,
            704400960,
            717710656,
            731384320,
            745422400,
            759825472,
            774593792,
            789727808,
            805254848,
            821148864,
            837410816,
            854041600,
            871041536,
            888411520,
            906151872,
            924293376,
            942807488,
            961694400,
            980955584,
            981564288,
            983080256,
            985373056,
            988385088,
            992086592,
            996447104,
            1001447616,
            1007072576,
            1013310208,
            1020149760,
            1027583360,
            1035603328,
            1044217088,
            1053406464,
            1063166528,
            1073493632
        };
    return TAB[currentLvl];
}

