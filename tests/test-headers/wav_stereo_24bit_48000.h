#include <vector>

namespace wav_stereo_24bit_48000 { 

int numSamplesPerChannel = 384000;
int bitDepth = 24;
uint32_t sampleRate = 48000;
int numChannels = 2;

std::vector<std::vector<double>> testBuffer = {{-0.0005353689193725586, -0.0018157958984375, -0.0024815797805786133, -0.0017586946487426758, -0.0009694099426269531, -0.0005301237106323242, -0.00023984909057617188, -0.0006633996963500977, -0.0007344484329223633, 0.0013926029205322266, 0.004686951637268066, 0.005301952362060547, 0.001447916030883789, -0.003507852554321289, -0.005098938941955566, -0.0023632049560546875, 0.0019316673278808594, 0.003896951675415039, 0.0021713972091674805, -0.0007047653198242188, -0.0014480352401733398, -0.0008498430252075195, -0.001700282096862793, -0.0032678842544555664, -0.0038613080978393555, -0.0010759830474853516, 0.01182401180267334, 0.02786707878112793, 0.01855754852294922, -0.016994118690490723, -0.03550422191619873, -0.021430492401123047, -0.0009359121322631836, 0.018381357192993164, 0.02882969379425049, 0.007241487503051758, -0.018944501876831055, -0.00481104850769043, 0.01887667179107666, 0.002834796905517578, -0.023562073707580566, -0.008999109268188477, 0.01643657684326172, 0.0038520097732543945, -0.0024552345275878906, 0.033385276794433594, 0.04029250144958496, -0.007833361625671387, -0.03152954578399658, -0.00864863395690918, 0.010521411895751953, 0.021465659141540527, 0.027612924575805664, -0.004909515380859375, -0.041514039039611816, -0.0006999969482421875, 0.07184028625488281, 0.05355656147003174, -0.03894925117492676, -0.06949126720428467, -0.0004367828369140625, 0.05938148498535156, 0.03382563591003418, -0.021600723266601562, -0.02450406551361084, 0.018337607383728027, 0.035019755363464355, 0.009488821029663086, -0.002547740936279297, 0.005485415458679199, -0.004842281341552734, -0.010583758354187012, 0.013787388801574707, 0.016601920127868652, -0.018032312393188477, -0.02136683464050293, 0.01699841022491455, 0.03017401695251465, 0.007547736167907715, -0.004074692726135254, 0.00835728645324707, 0.014879941940307617, -0.007208824157714844, -0.026047229766845703, 0.0035952329635620117, 0.041936397552490234, 0.017410874366760254, -0.04070174694061279, -0.04405665397644043, 0.01763904094696045, 0.05734562873840332, 0.01208043098449707, -0.053052544593811035, -0.033879995346069336, 0.04517984390258789, 0.06426751613616943, 0.002217888832092285, -0.023540019989013672, 0.03292644023895264, 0.041263461112976074, -0.044199466705322266, -0.05868065357208252, 0.030320167541503906, 0.052309274673461914, 0.0027663707733154297, -0.0023293495178222656, 0.010164737701416016, 0.004391789436340332, 0.004195094108581543, -0.008912801742553711, -0.014009714126586914, 0.007948517799377441, -0.018178105354309082, -0.06131124496459961, 0.002528667449951172, 0.09173691272735596, 0.04485476016998291, -0.0588078498840332, -0.05958127975463867, 0.0005204677581787109, 0.005663275718688965, -0.024928927421569824, -0.023584365844726562, -0.008938193321228027, -0.01889955997467041, -0.02177739143371582, 0.011068344116210938, 0.027295351028442383, -0.011210322380065918, -0.051587700843811035, -0.053266286849975586, -0.039228200912475586, -0.014955282211303711, 0.022309303283691406, 0.02100658416748047, -0.03366053104400635, -0.05080461502075195, 0.012375712394714355, 0.07740390300750732, 0.08623313903808594, 0.04926800727844238, -0.02035236358642578, -0.1011120080947876, -0.14040255546569824, -0.10365068912506104, -0.023254036903381348, 0.03857135772705078, 0.05435192584991455, 0.03889870643615723, 0.012852787971496582, -0.030987024307250977, -0.08929860591888428, -0.09824728965759277, -0.0326007604598999, 0.030603647232055664, 0.05155456066131592, 0.0559309720993042, 0.030367136001586914, -0.024924635887145996, -0.05092668533325195, -0.024532198905944824, 0.011846780776977539, 0.013265013694763184, -0.00581967830657959, 0.0026712417602539062, 0.007601737976074219, -0.039343833923339844, -0.04319131374359131, 0.06665289402008057, 0.14398396015167236, 0.07255923748016357, -0.03774690628051758, -0.06214296817779541, -0.029167890548706055, -0.023360371589660645, -0.058979034423828125, -0.08780872821807861, -0.0894085168838501, -0.09925878047943115, -0.12716281414031982, -0.1099623441696167, -0.014007568359375, 0.088714599609375, 0.1116938591003418, 0.06560969352722168, 0.03189575672149658, 0.02760756015777588, -0.005571961402893066, -0.0620419979095459, -0.07850146293640137, -0.06346392631530762, -0.0638892650604248, -0.06543803215026855, -0.047734737396240234, -0.040279388427734375, -0.053655028343200684, -0.0394212007522583, 0.026441454887390137, 0.08167052268981934, 0.08292233943939209, 0.06283867359161377, 0.03786969184875488, 0.016643762588500977, 0.035663723945617676, 0.08345603942871094, 0.11807060241699219, 0.14475929737091064, 0.1512831449508667, 0.07611465454101562, -0.06967699527740479, -0.18366336822509766, -0.2215193510055542, -0.228063702583313, -0.21772289276123047, -0.17403638362884521, -0.10664904117584229, -0.012221217155456543, 0.11883389949798584, 0.23630857467651367, 0.26976871490478516, 0.2348005771636963, 0.19006073474884033, 0.14441847801208496, 0.08886027336120605, 0.013650059700012207, -0.07653796672821045, -0.1362673044204712, -0.13289117813110352, -0.09005904197692871, -0.05935049057006836, -0.04871571063995361, -0.022919416427612305, 0.023525714874267578, 0.060304999351501465, 0.06689858436584473, 0.06617927551269531, 0.09962904453277588, 0.15390539169311523, 0.16637468338012695, 0.1253190040588379, 0.08236527442932129, 0.06566929817199707, 0.06699633598327637, 0.0629422664642334, 0.021541595458984375, -0.042909860610961914, -0.07471799850463867, -0.08527469635009766, -0.12843263149261475, -0.16909754276275635, -0.15074551105499268, -0.10744369029998779, -0.08842837810516357, -0.08267450332641602, -0.06730234622955322, -0.06644761562347412, -0.0873953104019165, -0.07795059680938721, -0.03837764263153076, -0.034098267555236816, -0.07519185543060303, -0.11002027988433838, -0.10905241966247559, -0.08707404136657715, -0.06271755695343018, -0.03213071823120117, 0.016660451889038086, 0.07577764987945557, 0.12079823017120361, 0.14485979080200195, 0.16540908813476562, 0.18814897537231445, 0.18603217601776123, 0.14115381240844727, 0.078652024269104, 0.03346526622772217, 0.020048856735229492, 0.028243064880371094, 0.027113676071166992, -0.006494998931884766, -0.04590046405792236, -0.020364046096801758, 0.07584714889526367, 0.13061916828155518, 0.0785517692565918, -0.0022612810134887695, -0.04539132118225098, -0.07252788543701172, -0.10594463348388672, -0.14356112480163574, -0.16857707500457764, -0.15273058414459229, -0.10285747051239014, -0.055068254470825195, -0.012634634971618652, 0.039493441581726074, 0.08833456039428711, 0.11618483066558838, 0.12784481048583984, 0.13093805313110352, 0.12640225887298584, 0.12281036376953125, 0.12299621105194092, 0.1068580150604248, 0.07169830799102783, 0.048117876052856445, 0.03379940986633301, -0.01625370979309082, -0.09772813320159912, -0.14298546314239502, -0.134590744972229, -0.12811553478240967, -0.1353682279586792, -0.11606812477111816, -0.08822298049926758, -0.09889388084411621, -0.11676955223083496, -0.09562039375305176, -0.07921159267425537, -0.1261528730392456, -0.20061981678009033, -0.23133325576782227, -0.22429180145263672, -0.2265070676803589, -0.23732519149780273, -0.2323462963104248, -0.20833563804626465, -0.17016899585723877, -0.11388063430786133, -0.03736007213592529, 0.04158031940460205, 0.10008406639099121, 0.13604795932769775, 0.15819740295410156, 0.1686631441116333, 0.17503464221954346, 0.18374860286712646, 0.1799170970916748, 0.16497564315795898, 0.16522789001464844, 0.17826223373413086, 0.19110441207885742, 0.2133733034133911, 0.23157572746276855, 0.2186269760131836, 0.19382965564727783, 0.1786268949508667, 0.1509941816329956, 0.09754598140716553, 0.03965890407562256, 0.01019740104675293, 0.02343595027923584, 0.04391515254974365, 0.034508466720581055, 0.027436256408691406, 0.05022251605987549, 0.06523478031158447, 0.06500518321990967, 0.07601487636566162, 0.07491195201873779, 0.04451632499694824, 0.024481773376464844, 0.02528250217437744, -0.0024760961532592773, -0.07039666175842285, -0.12084364891052246, -0.12771594524383545, -0.129064679145813, -0.14493012428283691, -0.16004621982574463, -0.16779577732086182, -0.16288995742797852, -0.13577568531036377, -0.10431289672851562, -0.09752440452575684, -0.11126375198364258, -0.13270068168640137, -0.1605534553527832, -0.1712244749069214, -0.14864563941955566, -0.12050533294677734, -0.11020779609680176, -0.11559748649597168, -0.11937582492828369, -0.09243893623352051, -0.04015517234802246, -0.018019914627075195, -0.04698038101196289, -0.07125461101531982, -0.04965519905090332, -0.014166831970214844, -0.0044831037521362305, -0.010814666748046875, -0.0033524036407470703, 0.0196835994720459, 0.04633009433746338, 0.07793891429901123, 0.10954630374908447, 0.11985993385314941, 0.10022234916687012, 0.0797581672668457, 0.08235812187194824, 0.07843363285064697, 0.043930888175964355, 0.012169480323791504, 0.021724343299865723, 0.06522941589355469, 0.10875856876373291, 0.1341007947921753, 0.1399155855178833, 0.12991487979888916, 0.11990725994110107, 0.11670315265655518, 0.1050945520401001, 0.08710646629333496, 0.07422339916229248, 0.04929494857788086, 0.01374828815460205, 0.007164478302001953, 0.025658607482910156, 0.026568055152893066, 0.03109431266784668, 0.08767318725585938, 0.1506139039993286, 0.15682220458984375, 0.14418649673461914, 0.15093612670898438, 0.15042626857757568, 0.1358642578125, 0.11857342720031738, 0.09690451622009277, 0.08896052837371826, 0.1047893762588501, 0.11650681495666504, 0.12035048007965088, 0.14209628105163574, 0.16403353214263916, 0.15483248233795166, 0.1357945203781128, 0.13604998588562012, 0.14855635166168213, 0.1522594690322876, 0.1344432830810547, 0.11377418041229248, 0.12683308124542236, 0.15817606449127197, 0.15553045272827148, 0.12389230728149414, 0.10789799690246582, 0.11085271835327148, 0.10509026050567627, 0.08825063705444336, 0.07614541053771973, 0.05879080295562744, 0.034650444984436035, 0.036742568016052246, 0.05430877208709717, 0.04065108299255371, 0.013470053672790527, 0.01580369472503662, 0.027284622192382812, 0.023079514503479004, 0.027742385864257812, 0.04296374320983887, 0.03832972049713135, 0.02705836296081543, 0.03471183776855469, 0.038552165031433105, 0.028060317039489746, 0.03086388111114502, 0.03963184356689453, 0.028004884719848633, 0.01490938663482666, 0.014776945114135742, 0.0006202459335327148, -0.01997840404510498, -0.008894920349121094, 0.006175875663757324, -0.01719522476196289, -0.04103231430053711, -0.03052210807800293, -0.015636682510375977, -0.0078202486038208, 0.009159684181213379, 0.014788269996643066, -0.015173554420471191, -0.05453753471374512, -0.06772994995117188, -0.062456488609313965, -0.06600832939147949, -0.08294367790222168, -0.0989910364151001, -0.0930023193359375, -0.06335842609405518, -0.06311619281768799, -0.11351346969604492, -0.13675391674041748, -0.11063992977142334, -0.10651528835296631, -0.10274779796600342}, {-0.00019276142120361328, -0.0008546113967895508, -0.0011512041091918945, -0.0003414154052734375, 0.00031960010528564453, 0.00026595592498779297, -0.000202178955078125, -0.001486063003540039, -0.002101898193359375, 1.811981201171875e-05, 0.003612518310546875, 0.004551410675048828, 0.0009132623672485352, -0.0033173561096191406, -0.0034875869750976562, 6.556510925292969e-06, 0.003580451011657715, 0.005030274391174316, 0.0047149658203125, 0.0023479461669921875, -0.002699732780456543, -0.007408738136291504, -0.007855415344238281, -0.006338238716125488, -0.004579901695251465, 0.006789565086364746, 0.025725483894348145, 0.022507071495056152, -0.01045382022857666, -0.03273916244506836, -0.023112177848815918, -0.0021512508392333984, 0.01935100555419922, 0.02936422824859619, 0.008227109909057617, -0.015272736549377441, -0.0035239458084106445, 0.011955857276916504, -0.007554292678833008, -0.027881383895874023, -0.007137775421142578, 0.01538383960723877, -0.002095937728881836, -0.005031943321228027, 0.035779714584350586, 0.040422677993774414, -0.010872960090637207, -0.03330528736114502, -0.010599255561828613, 0.005516767501831055, 0.016508936882019043, 0.025953292846679688, -0.0038393735885620117, -0.03726637363433838, 0.006607174873352051, 0.07679438591003418, 0.050582289695739746, -0.04903602600097656, -0.08028292655944824, -0.005838274955749512, 0.06014561653137207, 0.03633856773376465, -0.023099780082702637, -0.03108060359954834, 0.011297345161437988, 0.03178298473358154, 0.01012730598449707, -0.002532958984375, 0.0007157325744628906, -0.009153008460998535, -0.004942774772644043, 0.025640368461608887, 0.021431326866149902, -0.021207213401794434, -0.023672103881835938, 0.014607787132263184, 0.019919633865356445, -0.0077359676361083984, -0.011949539184570312, 0.011954665184020996, 0.01865363121032715, -0.013427972793579102, -0.0347137451171875, 0.005061507225036621, 0.050296902656555176, 0.023358702659606934, -0.03509020805358887, -0.034333229064941406, 0.023107171058654785, 0.045990943908691406, -0.01065373420715332, -0.06581234931945801, -0.027550339698791504, 0.05623173713684082, 0.06109762191772461, -0.015583395957946777, -0.036693453788757324, 0.03572821617126465, 0.04913675785064697, -0.03798544406890869, -0.04867219924926758, 0.038854241371154785, 0.05463826656341553, 0.01032400131225586, 0.00984954833984375, 0.011184096336364746, -0.004972696304321289, -0.004260540008544922, -0.0103074312210083, -0.002702951431274414, 0.02236759662628174, -0.023937582969665527, -0.08607518672943115, -0.01564610004425049, 0.09415388107299805, 0.060933589935302734, -0.04587054252624512, -0.06493103504180908, -0.020270943641662598, -0.00892174243927002, -0.019640445709228516, -0.008898735046386719, -0.0026618242263793945, -0.0260392427444458, -0.03579521179199219, 0.0015512704849243164, 0.03997945785522461, 0.03140711784362793, -0.007421135902404785, -0.04778718948364258, -0.06973564624786377, -0.03937232494354248, 0.030640125274658203, 0.0492023229598999, -0.01496422290802002, -0.060074448585510254, -0.024803638458251953, 0.029970288276672363, 0.060141801834106445, 0.07193243503570557, 0.04773902893066406, -0.0312345027923584, -0.11586475372314453, -0.1246786117553711, -0.058272719383239746, 0.007813811302185059, 0.03402233123779297, 0.04491865634918213, 0.05979466438293457, 0.03185844421386719, -0.06257164478302002, -0.12773776054382324, -0.09966015815734863, -0.04123198986053467, 0.01120150089263916, 0.06698894500732422, 0.08770668506622314, 0.05374789237976074, 0.0075310468673706055, -0.013025760650634766, -0.008366823196411133, -0.008133411407470703, -0.012332320213317871, 0.008831977844238281, 0.011703729629516602, -0.04704737663269043, -0.06306934356689453, 0.03733408451080322, 0.12193751335144043, 0.08452796936035156, 0.01544797420501709, 0.008822917938232422, 0.027741670608520508, 0.004280686378479004, -0.058293938636779785, -0.09628283977508545, -0.08288919925689697, -0.08616721630096436, -0.14423513412475586, -0.16563522815704346, -0.0805734395980835, 0.04283595085144043, 0.09959423542022705, 0.08430111408233643, 0.08578622341156006, 0.10448980331420898, 0.04402446746826172, -0.05954265594482422, -0.08478283882141113, -0.05704939365386963, -0.0678093433380127, -0.08811557292938232, -0.06034541130065918, -0.020751476287841797, -0.01802682876586914, -0.030344247817993164, -0.008818507194519043, 0.042110562324523926, 0.07975828647613525, 0.07644355297088623, 0.03725326061248779, 0.017053604125976562, 0.03372490406036377, 0.04184901714324951, 0.07449650764465332, 0.16484880447387695, 0.2086268663406372, 0.14426195621490479, 0.03964376449584961, -0.060538291931152344, -0.1561272144317627, -0.228829026222229, -0.25271451473236084, -0.23596715927124023, -0.2032707929611206, -0.13231194019317627, 0.00919651985168457, 0.17594587802886963, 0.2688401937484741, 0.2683805227279663, 0.24067473411560059, 0.21136140823364258, 0.1679096221923828, 0.08660686016082764, -0.03515136241912842, -0.12369036674499512, -0.13155591487884521, -0.10489225387573242, -0.08960938453674316, -0.07591736316680908, -0.04494881629943848, 0.0006262063980102539, 0.04543006420135498, 0.05810260772705078, 0.047572970390319824, 0.07597637176513672, 0.13945400714874268, 0.16162514686584473, 0.13311779499053955, 0.11332476139068604, 0.11291730403900146, 0.10619139671325684, 0.08590149879455566, 0.04206740856170654, -0.01557159423828125, -0.04412078857421875, -0.05707597732543945, -0.11134445667266846, -0.16953599452972412, -0.1619105339050293, -0.12540876865386963, -0.12011933326721191, -0.12652587890625, -0.10605597496032715, -0.08773314952850342, -0.09902238845825195, -0.08056032657623291, -0.015919804573059082, 0.003995180130004883, -0.05193126201629639, -0.10588502883911133, -0.11218905448913574, -0.10307466983795166, -0.0995858907699585, -0.07815062999725342, -0.026581645011901855, 0.030030131340026855, 0.07472968101501465, 0.11796140670776367, 0.16021192073822021, 0.18784892559051514, 0.19012200832366943, 0.16503000259399414, 0.12352192401885986, 0.07967805862426758, 0.054854393005371094, 0.06149017810821533, 0.06472361087799072, 0.021869301795959473, -0.036287784576416016, -0.0190279483795166, 0.07918262481689453, 0.12698709964752197, 0.059715986251831055, -0.024969100952148438, -0.06018102169036865, -0.0839623212814331, -0.11879599094390869, -0.15084350109100342, -0.1678851842880249, -0.15017127990722656, -0.1017221212387085, -0.05564475059509277, -0.011201977729797363, 0.04347264766693115, 0.0857917070388794, 0.1058722734451294, 0.11930596828460693, 0.12347972393035889, 0.11101508140563965, 0.10329151153564453, 0.11336326599121094, 0.11137628555297852, 0.07915294170379639, 0.051343679428100586, 0.04898476600646973, 0.02268528938293457, -0.057979702949523926, -0.12369036674499512, -0.12723660469055176, -0.12671709060668945, -0.1443500518798828, -0.12954139709472656, -0.09769916534423828, -0.10130727291107178, -0.11140549182891846, -0.08407294750213623, -0.06281077861785889, -0.10980761051177979, -0.1911386251449585, -0.22972261905670166, -0.23002183437347412, -0.234694242477417, -0.24427258968353271, -0.2479795217514038, -0.2351667881011963, -0.2099541425704956, -0.1788642406463623, -0.11421144008636475, -0.025595426559448242, 0.05230224132537842, 0.11520254611968994, 0.15294742584228516, 0.17534947395324707, 0.2000635862350464, 0.21004951000213623, 0.1932692527770996, 0.17428350448608398, 0.179948091506958, 0.18530499935150146, 0.17960584163665771, 0.19712412357330322, 0.219488263130188, 0.21025347709655762, 0.19125282764434814, 0.18508470058441162, 0.1694704294204712, 0.12549221515655518, 0.07104885578155518, 0.04029583930969238, 0.05243551731109619, 0.07193624973297119, 0.05684053897857666, 0.03926825523376465, 0.050171613693237305, 0.057363033294677734, 0.049514055252075195, 0.04949069023132324, 0.045107126235961914, 0.026120424270629883, 0.024148941040039062, 0.03752493858337402, 0.0141066312789917, -0.05343949794769287, -0.10280013084411621, -0.10529124736785889, -0.10992920398712158, -0.14469683170318604, -0.1778407096862793, -0.19040298461914062, -0.1854931116104126, -0.15789580345153809, -0.12273216247558594, -0.11422383785247803, -0.1266012191772461, -0.13487815856933594, -0.15205121040344238, -0.17784321308135986, -0.1768789291381836, -0.15126550197601318, -0.1354731321334839, -0.14378559589385986, -0.15488409996032715, -0.12973201274871826, -0.0766911506652832, -0.054975152015686035, -0.08002400398254395, -0.09874999523162842, -0.07738864421844482, -0.04359161853790283, -0.029198527336120605, -0.028589606285095215, -0.02039027214050293, 0.00023305416107177734, 0.02946031093597412, 0.07000374794006348, 0.10936415195465088, 0.11771225929260254, 0.09067606925964355, 0.07157456874847412, 0.08761930465698242, 0.096099853515625, 0.06136214733123779, 0.01703023910522461, 0.010963082313537598, 0.04609501361846924, 0.0911339521408081, 0.12428069114685059, 0.13417983055114746, 0.11591219902038574, 0.0977945327758789, 0.10513758659362793, 0.1107625961303711, 0.09388995170593262, 0.07846200466156006, 0.06401729583740234, 0.029898762702941895, 0.004997134208679199, 0.013776302337646484, 0.020159244537353516, 0.021957039833068848, 0.06718671321868896, 0.12535429000854492, 0.13554716110229492, 0.13538765907287598, 0.15213918685913086, 0.13934075832366943, 0.10779285430908203, 0.1019829511642456, 0.09841740131378174, 0.07521116733551025, 0.06976711750030518, 0.10565197467803955, 0.1457512378692627, 0.15254628658294678, 0.14875996112823486, 0.16248536109924316, 0.16472065448760986, 0.14304983615875244, 0.145097017288208, 0.17108142375946045, 0.15649104118347168, 0.1066904067993164, 0.10265815258026123, 0.15045702457427979, 0.16820776462554932, 0.13838410377502441, 0.12171757221221924, 0.12875676155090332, 0.1176307201385498, 0.08721673488616943, 0.07331037521362305, 0.07018780708312988, 0.04355001449584961, 0.01278221607208252, 0.018721580505371094, 0.04105055332183838, 0.039315223693847656, 0.02689528465270996, 0.030165791511535645, 0.036980628967285156, 0.037801265716552734, 0.03967130184173584, 0.03875696659088135, 0.03334546089172363, 0.025502324104309082, 0.012368917465209961, 0.007869720458984375, 0.025928497314453125, 0.04088783264160156, 0.030080199241638184, 0.01993858814239502, 0.033383727073669434, 0.03838944435119629, 0.0026932954788208008, -0.02671802043914795, -0.0038722753524780273, 0.007236838340759277, -0.03801846504211426, -0.06738543510437012, -0.04260730743408203, -0.013179421424865723, -0.0030993223190307617, 0.0028181076049804688, -0.0020074844360351562, -0.037847280502319336, -0.08669781684875488, -0.10269773006439209, -0.08195006847381592, -0.06769907474517822, -0.08812320232391357, -0.11547243595123291, -0.09213685989379883, -0.04346668720245361, -0.07539713382720947, -0.15947413444519043, -0.1560577154159546, -0.09122884273529053, -0.07877826690673828, -0.08785176277160645}};

}; // end namespace