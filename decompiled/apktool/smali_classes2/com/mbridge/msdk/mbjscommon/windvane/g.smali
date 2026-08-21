.class public final Lcom/mbridge/msdk/mbjscommon/windvane/g;
.super Ljava/lang/Object;
.source "WindVaneApiManager.java"


# static fields
.field private static a:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Class;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private b:Landroid/content/Context;

.field private c:Ljava/lang/Object;

.field private d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 12
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a:Ljava/util/HashMap;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 18
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/g;->b:Landroid/content/Context;

    .line 19
    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/g;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 1073
    const-class p1, Lcom/mbridge/msdk/mbjscommon/windvane/MvBridge;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/Class;)V

    :try_start_0
    const-string p1, "com.mbridge.msdk.offerwall.jscommon.OfferWall"

    .line 1076
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1077
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/Class;)V
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :try_start_1
    const-string p1, "com.mbridge.msdk.interstitial.jscommon.interstitial"

    .line 1082
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1083
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/Class;)V
    :try_end_1
    .catch Ljava/lang/ClassNotFoundException; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :try_start_2
    const-string p1, "com.mbridge.msdk.video.js.bridge.RewardJs"

    .line 1088
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1089
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/Class;)V
    :try_end_2
    .catch Ljava/lang/ClassNotFoundException; {:try_start_2 .. :try_end_2} :catch_2

    :catch_2
    :try_start_3
    const-string p1, "com.mbridge.msdk.video.js.bridge.VideoBridge"

    .line 1095
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1096
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/Class;)V
    :try_end_3
    .catch Ljava/lang/ClassNotFoundException; {:try_start_3 .. :try_end_3} :catch_3

    :catch_3
    :try_start_4
    const-string p1, "com.mbridge.msdk.mbjscommon.confirmation.bridge.ConfirmationJsBridgePlugin"

    .line 1102
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1103
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/Class;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_4

    goto :goto_0

    :catch_4
    move-exception p1

    .line 1105
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    :try_start_5
    const-string p1, "com.mbridge.msdk.mbjscommon.authority.jscommon.PrivateAuthorityJSBridge"

    .line 1108
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1109
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/Class;)V
    :try_end_5
    .catch Ljava/lang/ClassNotFoundException; {:try_start_5 .. :try_end_5} :catch_5

    :catch_5
    :try_start_6
    const-string p1, "com.mbridge.msdk.interactiveads.jscommon.Interactive"

    .line 1114
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1115
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/Class;)V
    :try_end_6
    .catch Ljava/lang/ClassNotFoundException; {:try_start_6 .. :try_end_6} :catch_6

    :catch_6
    :try_start_7
    const-string p1, "com.mbridge.msdk.mbjscommon.mraid.MraidJSBridge"

    .line 1120
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1121
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/Class;)V
    :try_end_7
    .catch Ljava/lang/ClassNotFoundException; {:try_start_7 .. :try_end_7} :catch_7

    :catch_7
    :try_start_8
    const-string p1, "com.mbridge.msdk.mbjscommon.bridge.BannerJSPlugin"

    .line 1126
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1127
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/Class;)V
    :try_end_8
    .catch Ljava/lang/ClassNotFoundException; {:try_start_8 .. :try_end_8} :catch_8

    :catch_8
    :try_start_9
    const-string p1, "com.mbridge.msdk.splash.js.SplashJs"

    .line 1133
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1134
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/Class;)V
    :try_end_9
    .catch Ljava/lang/ClassNotFoundException; {:try_start_9 .. :try_end_9} :catch_9

    :catch_9
    :try_start_a
    const-string p1, "com.mbridge.msdk.mbjscommon.webEnvCheck.WebGLCheckjs"

    .line 1141
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1142
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/Class;)V
    :try_end_a
    .catch Ljava/lang/ClassNotFoundException; {:try_start_a .. :try_end_a} :catch_a

    :catch_a
    return-void
.end method

.method private a(Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Landroid/content/Context;)Ljava/lang/Object;
    .locals 1

    .line 31
    sget-object v0, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Class;

    if-eqz p1, :cond_0

    .line 33
    :try_start_0
    const-class v0, Lcom/mbridge/msdk/mbjscommon/windvane/j;

    invoke-virtual {v0, p1}, Ljava/lang/Class;->isAssignableFrom(Ljava/lang/Class;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 34
    invoke-virtual {p1}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/j;

    .line 35
    invoke-virtual {p1, p3, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/j;->initialize(Landroid/content/Context;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    .line 36
    iget-object p3, p0, Lcom/mbridge/msdk/mbjscommon/windvane/g;->c:Ljava/lang/Object;

    invoke-virtual {p1, p3, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/j;->initialize(Ljava/lang/Object;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 40
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Ljava/lang/Object;
    .locals 2

    .line 54
    sget-object v0, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a:Ljava/util/HashMap;

    if-nez v0, :cond_0

    .line 55
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a:Ljava/util/HashMap;

    .line 58
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/g;->d:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/g;->b:Landroid/content/Context;

    invoke-direct {p0, p1, v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a(Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Landroid/content/Context;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public final a(Landroid/content/Context;)V
    .locals 0

    .line 24
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/g;->b:Landroid/content/Context;

    return-void
.end method

.method public final a(Ljava/lang/Class;)V
    .locals 2

    .line 46
    sget-object v0, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a:Ljava/util/HashMap;

    if-nez v0, :cond_0

    .line 47
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a:Ljava/util/HashMap;

    .line 50
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/mbjscommon/windvane/g;->a:Ljava/util/HashMap;

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Ljava/lang/Object;)V
    .locals 0

    .line 27
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/g;->c:Ljava/lang/Object;

    return-void
.end method
