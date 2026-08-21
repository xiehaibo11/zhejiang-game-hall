.class public Lcom/sigmob/sdk/nativead/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/q;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/util/HashMap;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    new-instance v0, Lcom/sigmob/sdk/nativead/d$1;

    invoke-direct {v0, p0, p4}, Lcom/sigmob/sdk/nativead/d$1;-><init>(Lcom/sigmob/sdk/nativead/d;Ljava/util/HashMap;)V

    invoke-static {p2, p3, p1, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 0

    const/4 p1, 0x1

    return p1
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;II)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;I)Z
    .locals 22

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    :try_start_0
    sget-object v3, Lcom/sigmob/sdk/nativead/d$2;->a:[I

    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/common/a;->ordinal()I

    move-result v4

    aget v3, v3, v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const-string v4, "fourElements"

    const-string v5, "play"

    const-string v6, "_STATUS_"

    const-string v7, "_BEHAVIOR_"

    const-string v8, "status"

    const-string v9, "_TYPE_"

    const-string v10, "is_auto_play"

    const-string v11, "_SCENE_"

    const-string v12, "type"

    const-string v13, "_PLAYLASTFRAME_"

    const-string v14, "scene"

    const-string v15, "_PLAYFIRSTFRAME_"

    const-string v2, "is_first"

    move-object/from16 p2, v5

    const-string v5, "end_time"

    move-object/from16 v16, v8

    const-string v8, "_ENDTIME_"

    move-object/from16 v17, v10

    const-string v10, "begin_time"

    move-object/from16 v18, v12

    const-string v12, "_BEGINTIME_"

    move-object/from16 v19, v14

    const-string v14, "video_time"

    move-object/from16 v20, v2

    const-string v2, "_VIDEOTIME_"

    move-object/from16 v21, v5

    const/4 v5, 0x0

    packed-switch v3, :pswitch_data_0

    :goto_0
    goto/16 :goto_a

    :pswitch_0
    :try_start_1
    const-string v2, "close"

    :goto_1
    invoke-direct {v0, v1, v4, v2, v5}, Lcom/sigmob/sdk/nativead/d;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/util/HashMap;)V

    goto :goto_0

    :pswitch_1
    const-string v2, "show"

    goto :goto_1

    :pswitch_2
    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v2

    iget-boolean v2, v2, Lcom/sigmob/sdk/base/models/ClickCommon;->is_final_click:Z

    if-eqz v2, :cond_0

    const-string v2, "1"

    goto :goto_2

    :cond_0
    const-string v2, "0"

    :goto_2
    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v4, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v4, :cond_1

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v5, "_CLICKAREA_"

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v6

    iget-object v6, v6, Lcom/sigmob/sdk/base/models/ClickCommon;->click_area:Ljava/lang/String;

    invoke-static {v6}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v5, v6}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v5, "_CLICKSCENE_"

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v6

    iget-object v6, v6, Lcom/sigmob/sdk/base/models/ClickCommon;->click_scene:Ljava/lang/String;

    invoke-static {v6}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v5, v6}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v5, "_AUTOCLICK_"

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v6

    iget v6, v6, Lcom/sigmob/sdk/base/models/ClickCommon;->auto_click:I

    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v5, v6}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v5, "_FINALCLICK_"

    invoke-virtual {v4, v5, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v5, "_DOWNX_"

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v6

    iget-object v6, v6, Lcom/sigmob/sdk/base/models/ClickCommon;->down:Lcom/czhj/sdk/common/utils/TouchLocation;

    invoke-virtual {v6}, Lcom/czhj/sdk/common/utils/TouchLocation;->getX()I

    move-result v6

    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v5, v6}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v5, "_DOWNY_"

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v6

    iget-object v6, v6, Lcom/sigmob/sdk/base/models/ClickCommon;->down:Lcom/czhj/sdk/common/utils/TouchLocation;

    invoke-virtual {v6}, Lcom/czhj/sdk/common/utils/TouchLocation;->getY()I

    move-result v6

    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v5, v6}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v5, "_UPX_"

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v6

    iget-object v6, v6, Lcom/sigmob/sdk/base/models/ClickCommon;->up:Lcom/czhj/sdk/common/utils/TouchLocation;

    invoke-virtual {v6}, Lcom/czhj/sdk/common/utils/TouchLocation;->getY()I

    move-result v6

    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v5, v6}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v4, "_UPY_"

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v5

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/ClickCommon;->up:Lcom/czhj/sdk/common/utils/TouchLocation;

    invoke-virtual {v5}, Lcom/czhj/sdk/common/utils/TouchLocation;->getY()I

    move-result v5

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    sget-object v3, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-static {v1, v3}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    new-instance v3, Ljava/util/HashMap;

    invoke-direct {v3}, Ljava/util/HashMap;-><init>()V

    const-string v4, "click_area"

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v5

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/ClickCommon;->click_area:Ljava/lang/String;

    invoke-virtual {v3, v4, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "click_scene"

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v5

    iget-object v5, v5, Lcom/sigmob/sdk/base/models/ClickCommon;->click_scene:Ljava/lang/String;

    invoke-virtual {v3, v4, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "is_final_click"

    invoke-virtual {v3, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "coordinate"

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v4

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/models/ClickCommon;->getClickCoordinate()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v2

    iget-object v2, v2, Lcom/sigmob/sdk/base/models/ClickCommon;->click_scene:Ljava/lang/String;

    const-string v4, "click"

    invoke-direct {v0, v1, v2, v4, v3}, Lcom/sigmob/sdk/nativead/d;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/util/HashMap;)V

    goto/16 :goto_0

    :pswitch_3
    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v4, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v4, :cond_2

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v5

    iget v5, v5, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->video_time:I

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v2, v5}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v3

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v4

    iget v4, v4, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->begin_time:I

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v12, v4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v3

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v4

    iget v4, v4, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->end_time:I

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v8, v4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v3

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v4

    iget v4, v4, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_first:I

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v15, v4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v3

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v4

    iget v4, v4, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_last:I

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v13, v4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v3

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v4

    iget v4, v4, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->scene:I

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v11, v4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v3

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v4

    iget v4, v4, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->type:I

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v9, v4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v3

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v4

    iget v4, v4, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_auto_play:I

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v7, v4}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->status:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v6, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->r:Lcom/sigmob/sdk/base/common/a;

    const/4 v3, 0x1

    invoke-static {v1, v2, v3}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;Z)V

    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->video_time:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v14, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->begin_time:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v10, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->end_time:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    move-object/from16 v4, v21

    invoke-virtual {v2, v4, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_first:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    move-object/from16 v5, v20

    invoke-virtual {v2, v5, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->scene:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    move-object/from16 v4, v19

    invoke-virtual {v2, v4, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->type:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    move-object/from16 v4, v18

    invoke-virtual {v2, v4, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_auto_play:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    move-object/from16 v4, v17

    invoke-virtual {v2, v4, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->status:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    move-object/from16 v4, v16

    invoke-virtual {v2, v4, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "complete"

    const/4 v4, 0x0

    invoke-direct {v0, v1, v3, v4, v2}, Lcom/sigmob/sdk/nativead/d;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/util/HashMap;)V

    goto/16 :goto_0

    :pswitch_4
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->p:Lcom/sigmob/sdk/base/common/a;

    invoke-static {v1, v2}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    const-string v2, "0.75"

    move-object/from16 v3, p2

    const/4 v4, 0x0

    :goto_3
    invoke-direct {v0, v1, v3, v2, v4}, Lcom/sigmob/sdk/nativead/d;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/util/HashMap;)V

    goto/16 :goto_0

    :pswitch_5
    move-object/from16 v3, p2

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->o:Lcom/sigmob/sdk/base/common/a;

    invoke-static {v1, v2}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    const-string v2, "0.50"

    const/4 v4, 0x0

    goto :goto_3

    :pswitch_6
    move-object/from16 v3, p2

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->n:Lcom/sigmob/sdk/base/common/a;

    invoke-static {v1, v2}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    const-string v2, "0.25"
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    const/4 v4, 0x0

    goto :goto_3

    :pswitch_7
    move-object/from16 v0, v19

    move-object/from16 v5, v20

    move-object/from16 v4, v21

    :try_start_2
    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v0, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v0, :cond_3

    move-object v0, v3

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-object/from16 v20, v5

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v5

    iget v5, v5, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->video_time:I

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v2, v5}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v0, v3

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->begin_time:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v12, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v0, v3

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->end_time:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v8, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v0, v3

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_first:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v15, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v0, v3

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_last:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v13, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v0, v3

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->scene:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v11, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v0, v3

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->type:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v9, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v0, v3

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_auto_play:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v7, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v0

    iget v0, v0, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->status:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v6, v0}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    :cond_3
    move-object/from16 v20, v5

    :goto_4
    sget-object v0, Lcom/sigmob/sdk/base/common/a;->R:Lcom/sigmob/sdk/base/common/a;

    const/4 v2, 0x1

    invoke-static {v1, v0, v2}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;Z)V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->video_time:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v14, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->begin_time:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v10, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->end_time:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_first:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v20

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->scene:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v5, v19

    invoke-virtual {v0, v5, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->type:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v18

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_auto_play:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v17

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->status:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v16

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "video_pause"
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    const/4 v4, 0x0

    move-object/from16 v3, p0

    :goto_5
    :try_start_3
    invoke-direct {v3, v1, v2, v4, v0}, Lcom/sigmob/sdk/nativead/d;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/util/HashMap;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto/16 :goto_b

    :pswitch_8
    move-object/from16 v5, v19

    move-object/from16 v3, v20

    move-object/from16 v4, v21

    :try_start_4
    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    instance-of v5, v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v5, :cond_4

    move-object v5, v0

    check-cast v5, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-object/from16 v20, v3

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->video_time:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v2, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->begin_time:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v12, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->end_time:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v8, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_first:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v15, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_last:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v13, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->scene:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v11, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->type:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v9, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_auto_play:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v7, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->status:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v6, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_6

    :cond_4
    move-object/from16 v20, v3

    :goto_6
    sget-object v0, Lcom/sigmob/sdk/base/common/a;->Q:Lcom/sigmob/sdk/base/common/a;

    invoke-static {v1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->video_time:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v14, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->begin_time:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v10, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->end_time:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_first:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v20

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->scene:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v5, v19

    invoke-virtual {v0, v5, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->type:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v18

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_auto_play:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v17

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->status:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v16

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "video_start"

    const/4 v4, 0x0

    move-object/from16 v3, p0

    goto/16 :goto_5

    :pswitch_9
    move-object/from16 v5, v19

    move-object/from16 v3, v20

    move-object/from16 v4, v21

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    instance-of v5, v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v5, :cond_5

    move-object v5, v0

    check-cast v5, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-object/from16 v20, v3

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->video_time:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v2, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->begin_time:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v12, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->end_time:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v8, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_first:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v15, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_last:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v13, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->scene:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v11, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->type:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v9, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_auto_play:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v7, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->status:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v6, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_7

    :cond_5
    move-object/from16 v20, v3

    :goto_7
    sget-object v0, Lcom/sigmob/sdk/base/common/a;->U:Lcom/sigmob/sdk/base/common/a;

    invoke-static {v1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->video_time:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v14, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->begin_time:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v10, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->end_time:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_first:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v20

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->scene:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v5, v19

    invoke-virtual {v0, v5, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->type:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v18

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_auto_play:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v17

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->status:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v16

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "video_restart"

    const/4 v4, 0x0

    move-object/from16 v3, p0

    goto/16 :goto_5

    :pswitch_a
    move-object/from16 v5, v19

    move-object/from16 v3, v20

    move-object/from16 v4, v21

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v0

    instance-of v5, v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v5, :cond_6

    move-object v5, v0

    check-cast v5, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-object/from16 v20, v3

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->video_time:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v2, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->begin_time:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v12, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->end_time:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v8, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_first:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v15, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_last:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v13, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->scene:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v11, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->type:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v9, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v2, v0

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v3

    iget v3, v3, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_auto_play:I

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v7, v3}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->status:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v6, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_8

    :cond_6
    move-object/from16 v20, v3

    :goto_8
    sget-object v0, Lcom/sigmob/sdk/base/common/a;->T:Lcom/sigmob/sdk/base/common/a;

    const/4 v2, 0x1

    invoke-static {v1, v0, v2}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;Z)V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->video_time:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v14, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->begin_time:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v10, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->end_time:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v4, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_first:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v20

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->scene:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v19

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->type:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v18

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->is_auto_play:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v17

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoCommon()Lcom/sigmob/sdk/base/models/VideoStatusCommon;

    move-result-object v2

    iget v2, v2, Lcom/sigmob/sdk/base/models/VideoStatusCommon;->status:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, v16

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "video_link"
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    const/4 v4, 0x0

    move-object/from16 v3, p0

    goto/16 :goto_5

    :catchall_0
    move-object/from16 v3, p0

    goto :goto_b

    :pswitch_b
    move-object v3, v0

    :try_start_5
    sget-object v0, Lcom/sigmob/sdk/base/common/a;->S:Lcom/sigmob/sdk/base/common/a;

    invoke-static {v1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    const-string v0, "ad_hide"

    const/4 v2, 0x0

    :goto_9
    invoke-direct {v3, v1, v0, v2, v2}, Lcom/sigmob/sdk/nativead/d;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/util/HashMap;)V

    goto :goto_b

    :pswitch_c
    move-object v3, v0

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->O:Lcom/sigmob/sdk/base/common/a;

    invoke-static {v1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    const-string v0, "ad_show"

    const/4 v2, 0x0

    goto :goto_9

    :pswitch_d
    move-object v3, v0

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->a:Lcom/sigmob/sdk/base/common/a;

    invoke-static {v1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    const-string v0, "start"
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    const/4 v2, 0x0

    goto :goto_9

    :catchall_1
    :goto_a
    move-object v3, v0

    :catchall_2
    :goto_b
    const/4 v0, 0x1

    return v0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;ZI)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 0

    const/4 p1, 0x1

    return p1
.end method
