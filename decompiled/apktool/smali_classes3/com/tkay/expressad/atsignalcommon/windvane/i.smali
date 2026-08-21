.class public final Lcom/tkay/expressad/atsignalcommon/windvane/i;
.super Ljava/lang/Object;


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

.field private d:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 9
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a:Ljava/util/HashMap;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 15
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->b:Landroid/content/Context;

    .line 16
    iput-object p2, p0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->d:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    :try_start_0
    const-string p1, "com.tkay.expressad.atsignalcommon.bridge.BannerJSPlugin"

    .line 1069
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1070
    invoke-static {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a(Ljava/lang/Class;)V
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :try_start_1
    const-string p1, "com.tkay.expressad.video.signal.communication.RewardJs"

    .line 1076
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1077
    invoke-static {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a(Ljava/lang/Class;)V
    :try_end_1
    .catch Ljava/lang/ClassNotFoundException; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :try_start_2
    const-string p1, "com.tkay.expressad.video.signal.communication.VideoBridge"

    .line 1082
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1083
    invoke-static {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a(Ljava/lang/Class;)V
    :try_end_2
    .catch Ljava/lang/ClassNotFoundException; {:try_start_2 .. :try_end_2} :catch_2

    :catch_2
    :try_start_3
    const-string p1, "com.tkay.expressad.atsignalcommon.mraid.MraidJSBridge"

    .line 1088
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1089
    invoke-static {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a(Ljava/lang/Class;)V
    :try_end_3
    .catch Ljava/lang/ClassNotFoundException; {:try_start_3 .. :try_end_3} :catch_3

    :catch_3
    :try_start_4
    const-string p1, "com.tkay.expressad.splash.js.SplashJs"

    .line 1094
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1095
    invoke-static {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a(Ljava/lang/Class;)V
    :try_end_4
    .catch Ljava/lang/ClassNotFoundException; {:try_start_4 .. :try_end_4} :catch_4

    :catch_4
    :try_start_5
    const-string p1, "com.tkay.expressad.atsignalcommon.webEnvCheck.WebGLCheckjs"

    .line 1101
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    .line 1102
    invoke-static {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a(Ljava/lang/Class;)V
    :try_end_5
    .catch Ljava/lang/ClassNotFoundException; {:try_start_5 .. :try_end_5} :catch_5

    :catch_5
    return-void
.end method

.method private a(Ljava/lang/String;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Landroid/content/Context;)Ljava/lang/Object;
    .locals 1

    .line 28
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Class;

    if-eqz p1, :cond_0

    .line 30
    :try_start_0
    const-class v0, Lcom/tkay/expressad/atsignalcommon/windvane/l;

    invoke-virtual {v0, p1}, Ljava/lang/Class;->isAssignableFrom(Ljava/lang/Class;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 31
    invoke-virtual {p1}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/l;

    .line 32
    invoke-virtual {p1, p3, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/l;->initialize(Landroid/content/Context;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    .line 33
    iget-object p3, p0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->c:Ljava/lang/Object;

    invoke-virtual {p1, p3, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/l;->initialize(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 37
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private static a()V
    .locals 1

    :try_start_0
    const-string v0, "com.tkay.expressad.atsignalcommon.bridge.BannerJSPlugin"

    .line 69
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 70
    invoke-static {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a(Ljava/lang/Class;)V
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :try_start_1
    const-string v0, "com.tkay.expressad.video.signal.communication.RewardJs"

    .line 76
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 77
    invoke-static {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a(Ljava/lang/Class;)V
    :try_end_1
    .catch Ljava/lang/ClassNotFoundException; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :try_start_2
    const-string v0, "com.tkay.expressad.video.signal.communication.VideoBridge"

    .line 82
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 83
    invoke-static {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a(Ljava/lang/Class;)V
    :try_end_2
    .catch Ljava/lang/ClassNotFoundException; {:try_start_2 .. :try_end_2} :catch_2

    :catch_2
    :try_start_3
    const-string v0, "com.tkay.expressad.atsignalcommon.mraid.MraidJSBridge"

    .line 88
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 89
    invoke-static {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a(Ljava/lang/Class;)V
    :try_end_3
    .catch Ljava/lang/ClassNotFoundException; {:try_start_3 .. :try_end_3} :catch_3

    :catch_3
    :try_start_4
    const-string v0, "com.tkay.expressad.splash.js.SplashJs"

    .line 94
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 95
    invoke-static {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a(Ljava/lang/Class;)V
    :try_end_4
    .catch Ljava/lang/ClassNotFoundException; {:try_start_4 .. :try_end_4} :catch_4

    :catch_4
    :try_start_5
    const-string v0, "com.tkay.expressad.atsignalcommon.webEnvCheck.WebGLCheckjs"

    .line 101
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 102
    invoke-static {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a(Ljava/lang/Class;)V
    :try_end_5
    .catch Ljava/lang/ClassNotFoundException; {:try_start_5 .. :try_end_5} :catch_5

    :catch_5
    return-void
.end method

.method public static a(Ljava/lang/Class;)V
    .locals 2

    .line 43
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a:Ljava/util/HashMap;

    if-nez v0, :cond_0

    .line 44
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a:Ljava/util/HashMap;

    .line 47
    :cond_0
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a:Ljava/util/HashMap;

    invoke-virtual {p0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private static b(Ljava/lang/String;)V
    .locals 1

    .line 59
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a:Ljava/util/HashMap;

    if-nez v0, :cond_0

    .line 60
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a:Ljava/util/HashMap;

    .line 63
    :cond_0
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a:Ljava/util/HashMap;

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Ljava/lang/Object;
    .locals 2

    .line 51
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a:Ljava/util/HashMap;

    if-nez v0, :cond_0

    .line 52
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a:Ljava/util/HashMap;

    .line 55
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->d:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->b:Landroid/content/Context;

    invoke-direct {p0, p1, v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/i;->a(Ljava/lang/String;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Landroid/content/Context;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public final a(Landroid/content/Context;)V
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->b:Landroid/content/Context;

    return-void
.end method

.method public final a(Ljava/lang/Object;)V
    .locals 0

    .line 24
    iput-object p1, p0, Lcom/tkay/expressad/atsignalcommon/windvane/i;->c:Ljava/lang/Object;

    return-void
.end method
