.class public Lcom/sigmob/sdk/base/models/SigMacroCommon;
.super Lcom/sigmob/sdk/base/models/BaseMacroCommon;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field public static final _ADSCENEID_:Ljava/lang/String; = "_ADSCENEID_"

.field public static final _ADSCENE_:Ljava/lang/String; = "_ADSCENE_"

.field public static final _AUTOCLICK_:Ljava/lang/String; = "_AUTOCLICK_"

.field public static final _BEGINTIME_:Ljava/lang/String; = "_BEGINTIME_"

.field public static final _BEHAVIOR_:Ljava/lang/String; = "_BEHAVIOR_"

.field public static final _CLICKAREA_:Ljava/lang/String; = "_CLICKAREA_"

.field public static final _CLICKID_:Ljava/lang/String; = "_CLICKID_"

.field public static final _CLICKSCENE_:Ljava/lang/String; = "_CLICKSCENE_"

.field public static final _COMPLETED_:Ljava/lang/String; = "_COMPLETED_"

.field public static final _CURRENCY_:Ljava/lang/String; = "_CURRENCY_"

.field public static final _DOWNX_:Ljava/lang/String; = "_DOWNX_"

.field public static final _DOWNY_:Ljava/lang/String; = "_DOWNY_"

.field public static final _ENDTIME_:Ljava/lang/String; = "_ENDTIME_"

.field public static final _FINALCLICK_:Ljava/lang/String; = "_FINALCLICK_"

.field public static final _HEIGHT_:Ljava/lang/String; = "_HEIGHT_"

.field public static final _HIGHESTLOSSPRICE_:Ljava/lang/String; = "_HIGHESTLOSSPRICE_"

.field public static final _IS_TRUNCATION_:Ljava/lang/String; = "_ISTRUNCATION_"

.field public static final _PLAYFIRSTFRAME_:Ljava/lang/String; = "_PLAYFIRSTFRAME_"

.field public static final _PLAYLASTFRAME_:Ljava/lang/String; = "_PLAYLASTFRAME_"

.field public static final _PROGRESS_:Ljava/lang/String; = "_PROGRESS_"

.field public static final _PUBLISHERPRICE_:Ljava/lang/String; = "_PUBLISHERPRICE_"

.field public static final _SCENE_:Ljava/lang/String; = "_SCENE_"

.field public static final _SETCLOSETIME_:Ljava/lang/String; = "_SETCLOSETIME_"

.field public static final _SHOWSKIPTIME_:Ljava/lang/String; = "_SHOWSKIPTIME_"

.field public static final _SLOTHEIGHT_:Ljava/lang/String; = "_SLOTHEIGHT_"

.field public static final _SLOTWIDTH_:Ljava/lang/String; = "_SLOTWIDTH_"

.field public static final _STATUS_:Ljava/lang/String; = "_STATUS_"

.field public static final _TYPE_:Ljava/lang/String; = "_TYPE_"

.field public static final _UPX_:Ljava/lang/String; = "_UPX_"

.field public static final _UPY_:Ljava/lang/String; = "_UPY_"

.field public static final _VIDEOTIME_:Ljava/lang/String; = "_VIDEOTIME_"

.field public static final _VMD5_:Ljava/lang/String; = "_VMD5_"

.field public static final _VURL_:Ljava/lang/String; = "_VURL_"

.field public static final _WIDTH_:Ljava/lang/String; = "_WIDTH_"

.field private static final serialVersionUID:J = 0x1L


# instance fields
.field private mMacroMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mServerMacroMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/sigmob/sdk/base/models/BaseMacroCommon;-><init>()V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/SigMacroCommon;->mMacroMap:Ljava/util/Map;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/SigMacroCommon;->mServerMacroMap:Ljava/util/Map;

    return-void
.end method

.method private static getMacroValue(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const-string v0, "unFind"

    const/4 v1, -0x1

    :try_start_0
    invoke-virtual {p0}, Ljava/lang/String;->hashCode()I

    move-result v2

    sparse-switch v2, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v2, "_SLOTWIDTH_"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 v1, 0x5

    goto :goto_0

    :sswitch_1
    const-string v2, "_STATUS_"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 v1, 0x2

    goto :goto_0

    :sswitch_2
    const-string v2, "_WIDTH_"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 v1, 0x6

    goto :goto_0

    :sswitch_3
    const-string v2, "_BEHAVIOR_"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 v1, 0x3

    goto :goto_0

    :sswitch_4
    const-string v2, "_SCENE_"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :sswitch_5
    const-string v2, "_HEIGHT_"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/16 v1, 0x8

    goto :goto_0

    :sswitch_6
    const-string v2, "_SLOTHEIGHT_"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 v1, 0x7

    goto :goto_0

    :sswitch_7
    const-string v2, "_TYPE_"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 v1, 0x0

    goto :goto_0

    :sswitch_8
    const-string v2, "_BEGINTIME_"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_0

    const/4 v1, 0x4

    :cond_0
    :goto_0
    const-string p0, "0"

    packed-switch v1, :pswitch_data_0

    goto :goto_1

    :pswitch_0
    :try_start_1
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object p0

    invoke-virtual {p0}, Lcom/czhj/sdk/common/ClientMetadata;->getRealMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :pswitch_1
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object p0

    invoke-virtual {p0}, Lcom/czhj/sdk/common/ClientMetadata;->getRealMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    :pswitch_2
    return-object p0

    :pswitch_3
    const-string p0, "2"

    :pswitch_4
    return-object p0

    :pswitch_5
    const-string p0, "1"
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object p0

    :catchall_0
    :goto_1
    return-object v0

    :sswitch_data_0
    .sparse-switch
        -0x5eca2e18 -> :sswitch_8
        -0x591a3c9a -> :sswitch_7
        -0x2779fd65 -> :sswitch_6
        -0x18cb3927 -> :sswitch_5
        0x32e2ea92 -> :sswitch_4
        0x3520a2ce -> :sswitch_3
        0x3a0a7c98 -> :sswitch_2
        0x4647616e -> :sswitch_1
        0x7ba1c096 -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_5
        :pswitch_4
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method

.method private replaceMacroWithMap(Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/SigMacroCommon;->mServerMacroMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "macroProcess() called with:["

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "]["

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "]"

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v5, "unFind"

    if-nez v1, :cond_0

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/models/SigMacroCommon;->mMacroMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_1

    return-object v0

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method private replaceWithDefault(Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    invoke-static {p1}, Lcom/sigmob/sdk/base/models/BaseMacroCommon$SigmobMacro;->getMacroValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "macroProcess() called with:["

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "]["

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "]"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v4, "unFind"

    if-nez v1, :cond_0

    invoke-virtual {v0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    invoke-static {p1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->getMacroValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "macroProcess() called with: ["

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    invoke-virtual {v0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p1, :cond_1

    return-object v0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method


# virtual methods
.method public addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/SigMacroCommon;->mMacroMap:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public clearMacro()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/SigMacroCommon;->mMacroMap:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    return-void
.end method

.method public getMarcoKey(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/SigMacroCommon;->mMacroMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1
.end method

.method public macroProcess(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p1

    :cond_0
    const-string v0, "_([A-Z,0-9])+_"

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "macroProcess() called with: origin url "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :cond_1
    :goto_0
    invoke-virtual {v0}, Ljava/util/regex/Matcher;->find()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-virtual {v0}, Ljava/util/regex/Matcher;->group()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->replaceMacroWithMap(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v4, "unFind"

    if-nez v3, :cond_2

    :try_start_1
    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_2

    :goto_1
    invoke-virtual {p1, v1, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_2
    invoke-direct {p0, v1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->replaceWithDefault(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_1

    goto :goto_1

    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "macroProcess() called with: final url "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_2
    return-object p1
.end method

.method public removeMarcoKey(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/SigMacroCommon;->mMacroMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public setServerMacroMap(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/SigMacroCommon;->mServerMacroMap:Ljava/util/Map;

    return-void
.end method
