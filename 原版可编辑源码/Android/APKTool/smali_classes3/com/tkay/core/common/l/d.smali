.class public final Lcom/tkay/core/common/l/d;
.super Ljava/lang/Object;


# static fields
.field public static a:Ljava/lang/String; = null

.field public static b:Ljava/lang/String; = null

.field public static c:Ljava/lang/String; = null

.field public static d:Ljava/lang/String; = ""

.field static e:Ljava/lang/String; = null

.field private static f:Ljava/lang/String; = null

.field private static g:Ljava/lang/String; = null

.field private static h:Ljava/lang/String; = null

.field private static i:Ljava/lang/String; = ""

.field private static j:Ljava/lang/String; = ""

.field private static k:Ljava/lang/String; = ""

.field private static l:Ljava/lang/String; = ""

.field private static m:Ljava/lang/String; = ""

.field private static n:I = 0x0

.field private static o:Ljava/lang/String; = ""

.field private static p:Ljava/lang/String; = ""

.field private static q:Ljava/lang/String; = null

.field private static r:Ljava/lang/String; = ""

.field private static s:Ljava/lang/String; = ""

.field private static t:I = -0x1

.field private static u:I = -0x1

.field private static v:I = -0x1

.field private static w:I = -0x1


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 71
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(I)I
    .locals 1

    const/16 v0, 0x14

    if-eq p0, v0, :cond_0

    packed-switch p0, :pswitch_data_0

    const/4 p0, -0x1

    return p0

    :pswitch_0
    const/16 p0, 0xd

    return p0

    :pswitch_1
    const/4 p0, 0x3

    return p0

    :pswitch_2
    const/4 p0, 0x1

    return p0

    :cond_0
    const/16 p0, 0x10

    return p0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_2
        :pswitch_2
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_0
        :pswitch_1
        :pswitch_1
    .end packed-switch
.end method

.method public static a()Ljava/lang/String;
    .locals 2

    .line 232
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "model"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    .line 238
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_1

    return-object v1

    .line 244
    :cond_1
    sget-object v0, Landroid/os/Build;->MODEL:Ljava/lang/String;

    return-object v0

    :catch_0
    return-object v1
.end method

.method public static declared-synchronized a(ILjava/lang/String;)V
    .locals 3

    const-class v0, Lcom/tkay/core/common/l/d;

    monitor-enter v0

    .line 794
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/l/d;->a:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_1

    .line 796
    :try_start_1
    new-instance v1, Lorg/json/JSONObject;

    sget-object v2, Lcom/tkay/core/common/l/d;->a:Ljava/lang/String;

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 797
    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v2, :cond_0

    .line 798
    monitor-exit v0

    return-void

    .line 800
    :cond_0
    :try_start_2
    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 801
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/tkay/core/common/l/d;->a:Ljava/lang/String;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 805
    monitor-exit v0

    return-void

    :catch_0
    monitor-exit v0

    return-void

    .line 808
    :cond_1
    :try_start_3
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 809
    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 810
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/tkay/core/common/l/d;->a:Ljava/lang/String;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 813
    monitor-exit v0

    return-void

    .line 815
    :catch_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(Landroid/content/Context;)V
    .locals 3

    .line 81
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/l/d;->d()Ljava/lang/String;

    .line 82
    invoke-static {p0}, Lcom/tkay/core/common/l/d;->k(Landroid/content/Context;)Ljava/lang/String;

    .line 83
    invoke-static {p0}, Lcom/tkay/core/common/l/d;->i(Landroid/content/Context;)Ljava/lang/String;

    .line 84
    invoke-static {p0}, Lcom/tkay/core/common/l/d;->h(Landroid/content/Context;)Ljava/lang/String;

    .line 85
    invoke-static {p0}, Lcom/tkay/core/common/l/d;->g(Landroid/content/Context;)I

    .line 86
    invoke-static {}, Lcom/tkay/core/common/l/d;->a()Ljava/lang/String;

    .line 87
    invoke-static {}, Lcom/tkay/core/common/l/d;->b()Ljava/lang/String;

    .line 88
    invoke-static {p0}, Lcom/tkay/core/common/l/d;->d(Landroid/content/Context;)Ljava/lang/String;

    .line 89
    invoke-static {}, Lcom/tkay/core/common/l/d;->f()Ljava/lang/String;

    .line 90
    invoke-static {p0}, Lcom/tkay/core/common/l/d;->f(Landroid/content/Context;)Ljava/lang/String;

    .line 91
    invoke-static {}, Lcom/tkay/core/common/l/d;->c()Ljava/lang/String;

    .line 92
    invoke-static {p0}, Lcom/tkay/core/common/l/d;->n(Landroid/content/Context;)Ljava/lang/String;

    const-string v0, "tkay_sdk"

    const-string v1, "NETWORK_VERSION_NAME"

    const-string v2, ""

    .line 1734
    invoke-static {p0, v0, v1, v2}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/l/d;->a:Ljava/lang/String;

    const-string v0, "android.permission.READ_PHONE_STATE"

    .line 94
    invoke-static {v0, p0}, Lcom/tkay/core/common/l/h;->a(Ljava/lang/String;Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "phone"

    .line 95
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    .line 96
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getSimOperator()Ljava/lang/String;

    move-result-object p0

    .line 97
    invoke-static {p0}, Lcom/tkay/core/common/l/h;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    const/4 v1, 0x3

    if-le v0, v1, :cond_0

    const/4 v0, 0x0

    .line 98
    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/l/d;->r:Ljava/lang/String;

    .line 99
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/tkay/core/common/l/d;->s:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method

.method public static a(Ljava/lang/String;)V
    .locals 3

    .line 682
    sput-object p0, Lcom/tkay/core/common/l/d;->g:Ljava/lang/String;

    .line 683
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    sget-object v0, Lcom/tkay/core/common/l/d;->g:Ljava/lang/String;

    const-string v1, "tkay_sdk"

    const-string v2, "tkay_gaid"

    invoke-static {p0, v1, v2, v0}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static b(Ljava/lang/String;)I
    .locals 4

    .line 1112
    sget v0, Lcom/tkay/core/common/l/d;->w:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    return v0

    :cond_0
    const/4 v0, 0x0

    .line 1115
    sput v0, Lcom/tkay/core/common/l/d;->w:I

    .line 1117
    :try_start_0
    invoke-static {p0}, Lcom/tkay/core/common/l/d;->c(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    const-string v1, "com.tencent.mm.opensdk.openapi.IWXAPI"

    .line 1118
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "getWXAppSupportAPI"

    new-array v3, v0, [Ljava/lang/Class;

    .line 1119
    invoke-virtual {v1, v2, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v0, v0, [Ljava/lang/Object;

    .line 1120
    invoke-virtual {v1, p0, v0}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    sput p0, Lcom/tkay/core/common/l/d;->w:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1126
    :catchall_0
    sget p0, Lcom/tkay/core/common/l/d;->w:I

    return p0
.end method

.method public static b()Ljava/lang/String;
    .locals 2

    .line 255
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "brand"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    .line 260
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_1

    return-object v1

    .line 266
    :cond_1
    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    return-object v0

    :catch_0
    return-object v1
.end method

.method public static b(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 123
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "mcc"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    if-nez p0, :cond_1

    .line 128
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    .line 133
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_2

    return-object v1

    .line 140
    :cond_2
    sget-object p0, Lcom/tkay/core/common/l/d;->r:Ljava/lang/String;

    return-object p0

    :catch_0
    return-object v1
.end method

.method public static c(Ljava/lang/String;)Ljava/lang/Object;
    .locals 8

    .line 1130
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    :try_start_0
    const-string v0, "com.tencent.mm.opensdk.openapi.WXAPIFactory"

    .line 1134
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v2, "createWXAPI"

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Class;

    .line 1135
    const-class v5, Landroid/content/Context;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    const-class v5, Ljava/lang/String;

    const/4 v7, 0x1

    aput-object v5, v4, v7

    invoke-virtual {v0, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v2, v3, [Ljava/lang/Object;

    .line 1136
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    aput-object v3, v2, v6

    aput-object p0, v2, v7

    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    return-object v1
.end method

.method public static c()Ljava/lang/String;
    .locals 3

    .line 607
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "timezone"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    .line 613
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_1

    return-object v1

    .line 620
    :cond_1
    :try_start_1
    sget-object v0, Lcom/tkay/core/common/l/d;->p:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 621
    invoke-static {}, Ljava/util/TimeZone;->getDefault()Ljava/util/TimeZone;

    move-result-object v0

    .line 622
    sget-object v1, Ljava/util/Locale;->ENGLISH:Ljava/util/Locale;

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v2, v1}, Ljava/util/TimeZone;->getDisplayName(ZILjava/util/Locale;)Ljava/lang/String;

    move-result-object v0

    .line 623
    sput-object v0, Lcom/tkay/core/common/l/d;->p:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object v0

    .line 631
    :catchall_0
    :cond_2
    sget-object v0, Lcom/tkay/core/common/l/d;->p:Ljava/lang/String;

    return-object v0

    :catch_0
    return-object v1
.end method

.method public static c(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 149
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "mnc"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    if-nez p0, :cond_1

    .line 154
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    .line 159
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_2

    return-object v1

    .line 166
    :cond_2
    sget-object p0, Lcom/tkay/core/common/l/d;->s:Ljava/lang/String;

    return-object p0

    :catch_0
    return-object v1
.end method

.method public static d()Ljava/lang/String;
    .locals 2

    .line 640
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "os_vc"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    .line 645
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_1

    return-object v1

    .line 652
    :cond_1
    sget-object v0, Lcom/tkay/core/common/l/d;->k:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 2677
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    .line 654
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/l/d;->k:Ljava/lang/String;

    .line 657
    :cond_2
    sget-object v0, Lcom/tkay/core/common/l/d;->k:Ljava/lang/String;

    return-object v0

    :catch_0
    return-object v1
.end method

.method public static d(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    .line 178
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "android_id"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v2, ""

    if-eqz v0, :cond_0

    return-object v2

    :cond_0
    if-nez p0, :cond_1

    .line 183
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    .line 187
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-nez v0, :cond_2

    return-object v2

    .line 194
    :cond_2
    :try_start_1
    sget-object v0, Lcom/tkay/core/common/l/d;->h:Ljava/lang/String;

    if-nez v0, :cond_3

    .line 196
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p0

    invoke-static {p0, v1}, Landroid/provider/Settings$Secure;->getString(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 198
    sput-object p0, Lcom/tkay/core/common/l/d;->h:Ljava/lang/String;

    if-nez p0, :cond_3

    .line 199
    sput-object v2, Lcom/tkay/core/common/l/d;->h:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    .line 203
    :catch_0
    sput-object v2, Lcom/tkay/core/common/l/d;->h:Ljava/lang/String;

    .line 206
    :cond_3
    :goto_0
    sget-object p0, Lcom/tkay/core/common/l/d;->h:Ljava/lang/String;

    return-object p0

    :catch_1
    return-object v2
.end method

.method static synthetic d(Ljava/lang/String;)Z
    .locals 1

    const-string v0, "^[0-]+$"

    .line 4002
    invoke-static {v0, p0}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result p0

    return p0
.end method

.method public static e()Ljava/lang/String;
    .locals 2

    .line 661
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "os_vn"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 665
    :cond_0
    sget-object v0, Lcom/tkay/core/common/l/d;->j:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 666
    sget-object v0, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    sput-object v0, Lcom/tkay/core/common/l/d;->j:Ljava/lang/String;

    .line 668
    :cond_1
    sget-object v0, Lcom/tkay/core/common/l/d;->j:Ljava/lang/String;

    return-object v0
.end method

.method public static e(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    if-nez p0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    const/4 v0, 0x0

    .line 215
    sput-object v0, Lcom/tkay/core/common/l/d;->e:Ljava/lang/String;

    .line 217
    :try_start_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 218
    invoke-static {p0}, Lcom/tkay/core/common/l/d;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    .line 219
    sput-object p0, Lcom/tkay/core/common/l/d;->e:Ljava/lang/String;

    invoke-static {p0}, Lcom/tkay/core/common/l/f;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/tkay/core/common/l/d;->e:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 223
    :catchall_0
    :cond_1
    sget-object p0, Lcom/tkay/core/common/l/d;->e:Ljava/lang/String;

    return-object p0
.end method

.method private static e(Ljava/lang/String;)Z
    .locals 1

    const-string v0, "^[0-]+$"

    .line 1002
    invoke-static {v0, p0}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result p0

    return p0
.end method

.method public static f()Ljava/lang/String;
    .locals 4

    const-string v0, ""

    .line 694
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v1, :cond_0

    return-object v0

    .line 701
    :cond_0
    sget-object v1, Lcom/tkay/core/common/l/d;->g:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 702
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const-string v2, "tkay_sdk"

    const-string v3, "tkay_gaid"

    invoke-static {v1, v2, v3, v0}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/l/d;->g:Ljava/lang/String;

    .line 704
    :cond_1
    sget-object v0, Lcom/tkay/core/common/l/d;->g:Ljava/lang/String;

    :catch_0
    return-object v0
.end method

.method public static f(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 275
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "language"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    if-nez p0, :cond_1

    .line 280
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    .line 284
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_2

    return-object v1

    .line 290
    :cond_2
    sget-object v0, Lcom/tkay/core/common/l/d;->o:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 291
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    iget-object p0, p0, Landroid/content/res/Configuration;->locale:Ljava/util/Locale;

    .line 292
    invoke-virtual {p0}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object p0

    .line 293
    sput-object p0, Lcom/tkay/core/common/l/d;->o:Ljava/lang/String;

    return-object p0

    .line 295
    :cond_3
    sget-object p0, Lcom/tkay/core/common/l/d;->o:Ljava/lang/String;

    return-object p0

    :catch_0
    return-object v1
.end method

.method public static g(Landroid/content/Context;)I
    .locals 2

    .line 306
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "orient"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    if-nez p0, :cond_1

    .line 311
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    .line 314
    :cond_1
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    .line 316
    iget p0, p0, Landroid/content/res/Configuration;->orientation:I

    const/4 v0, 0x2

    if-ne p0, v0, :cond_2

    return v0

    :cond_2
    const/4 v0, 0x1

    if-ne p0, v0, :cond_3

    :cond_3
    return v0
.end method

.method public static g()Ljava/lang/String;
    .locals 6

    .line 756
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v0

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    .line 761
    :cond_0
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 762
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    sub-long/2addr v2, v4

    long-to-double v2, v2

    const-wide v4, 0x408f400000000000L    # 1000.0

    div-double/2addr v2, v4

    .line 766
    new-instance v0, Ljava/math/BigDecimal;

    invoke-direct {v0, v2, v3}, Ljava/math/BigDecimal;-><init>(D)V

    const/4 v2, 0x6

    const/4 v3, 0x4

    .line 767
    invoke-virtual {v0, v2, v3}, Ljava/math/BigDecimal;->setScale(II)Ljava/math/BigDecimal;

    move-result-object v0

    invoke-virtual {v0}, Ljava/math/BigDecimal;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    .line 769
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-object v1
.end method

.method public static h(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    .line 335
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "app_vc"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    if-nez p0, :cond_1

    .line 340
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    .line 343
    :cond_1
    sget v0, Lcom/tkay/core/common/l/d;->n:I

    if-nez v0, :cond_2

    .line 345
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v2, 0x0

    invoke-virtual {v0, p0, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 346
    iget p0, p0, Landroid/content/pm/PackageInfo;->versionCode:I

    sput p0, Lcom/tkay/core/common/l/d;->n:I

    .line 347
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    sget v0, Lcom/tkay/core/common/l/d;->n:I

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 349
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v1

    .line 353
    :cond_2
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    sget v0, Lcom/tkay/core/common/l/d;->n:I

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static h()Lorg/json/JSONObject;
    .locals 2

    .line 781
    sget-object v0, Lcom/tkay/core/common/l/d;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 783
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    sget-object v1, Lcom/tkay/core/common/l/d;->a:Ljava/lang/String;

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 789
    :catch_0
    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    return-object v0
.end method

.method public static declared-synchronized i()Ljava/lang/String;
    .locals 6

    const-class v0, Lcom/tkay/core/common/l/d;

    monitor-enter v0

    .line 818
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    const-string v2, "ua"

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, ""
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 819
    monitor-exit v0

    return-object v1

    .line 823
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, ""
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 824
    monitor-exit v0

    return-object v1

    .line 830
    :cond_1
    :try_start_2
    sget-object v1, Lcom/tkay/core/common/l/d;->i:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 831
    sget-object v1, Lcom/tkay/core/common/l/d;->i:Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit v0

    return-object v1

    .line 833
    :cond_2
    :try_start_3
    sget-object v1, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    .line 834
    invoke-static {}, Lcom/tkay/core/common/l/d;->a()Ljava/lang/String;

    move-result-object v2

    .line 835
    sget-object v3, Landroid/os/Build;->ID:Ljava/lang/String;

    .line 836
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    .line 837
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Mozilla/5.0 (Linux; Android "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "; "

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " Build/"

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ") AppleWebKit/535.19 (KHTML, like Gecko) Chrome/18.0.1025.133 Mobile Safari/535.19"

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    monitor-exit v0

    return-object v1

    :cond_3
    :try_start_4
    const-string v1, ""
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 840
    monitor-exit v0

    return-object v1

    :catch_0
    :try_start_5
    const-string v1, ""
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    .line 827
    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static i(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    .line 362
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "app_vn"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    if-nez p0, :cond_1

    .line 367
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    .line 371
    :cond_1
    :try_start_0
    sget-object v0, Lcom/tkay/core/common/l/d;->m:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 372
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v2, 0x0

    invoke-virtual {v0, p0, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 373
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    .line 374
    sput-object p0, Lcom/tkay/core/common/l/d;->m:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    .line 380
    :cond_2
    sget-object p0, Lcom/tkay/core/common/l/d;->m:Ljava/lang/String;

    return-object p0

    :catch_0
    move-exception p0

    .line 377
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v1
.end method

.method public static j()Ljava/lang/String;
    .locals 2

    .line 1006
    sget-object v0, Lcom/tkay/core/common/l/d;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1007
    sget-object v0, Lcom/tkay/core/common/l/d;->d:Ljava/lang/String;

    return-object v0

    .line 1009
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->F()Ljava/lang/String;

    move-result-object v0

    .line 1010
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 1012
    sput-object v0, Lcom/tkay/core/common/l/d;->d:Ljava/lang/String;

    return-object v0

    .line 1014
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->F()Ljava/lang/String;

    move-result-object v0

    .line 1015
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    :try_start_0
    const-string v0, "com.unity3d.player.UnityPlayer"

    .line 1018
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    const-string v0, "2"
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const-string v0, "1"

    :goto_0
    :try_start_1
    const-string v1, "org.cocos2dx.lib.Cocos2dxActivity"

    .line 1023
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    const-string v0, "3"

    const-string v1, "org.cocos2dx.lib.Cocos2dxJavascriptJavaBridge"

    .line 1026
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    const-string v0, "4"
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 1034
    :catchall_1
    :cond_2
    sput-object v0, Lcom/tkay/core/common/l/d;->d:Ljava/lang/String;

    return-object v0
.end method

.method public static j(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 401
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "screen"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    if-nez p0, :cond_1

    .line 406
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    .line 410
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_2

    return-object v1

    .line 416
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    if-nez p0, :cond_3

    .line 2386
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    goto :goto_0

    :cond_3
    move-object v1, p0

    .line 2388
    :goto_0
    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    .line 2389
    iget v1, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 416
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "*"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-nez p0, :cond_4

    .line 2394
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    .line 2396
    :cond_4
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    .line 2397
    iget p0, p0, Landroid/util/DisplayMetrics;->heightPixels:I

    .line 416
    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :catch_0
    return-object v1
.end method

.method public static k()I
    .locals 2

    .line 1053
    sget v0, Lcom/tkay/core/common/l/d;->u:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_1

    .line 1055
    invoke-static {}, Lcom/tkay/core/common/l/d;->l()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 1056
    sput v1, Lcom/tkay/core/common/l/d;->u:I

    goto :goto_0

    :cond_0
    :try_start_0
    const-string v0, "com.tencent.mm.opensdk.openapi.WXAPIFactory"

    .line 1059
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    const-string v0, "com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram"

    .line 1060
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    const/4 v0, 0x1

    .line 1061
    sput v0, Lcom/tkay/core/common/l/d;->u:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 1066
    :catchall_0
    sput v1, Lcom/tkay/core/common/l/d;->u:I

    .line 1070
    :cond_1
    :goto_0
    sget v0, Lcom/tkay/core/common/l/d;->u:I

    return v0
.end method

.method public static k(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    .line 423
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "package_name"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    if-nez p0, :cond_1

    .line 428
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    .line 432
    :cond_1
    :try_start_0
    sget-object v0, Lcom/tkay/core/common/l/d;->l:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 433
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/4 v2, 0x0

    invoke-virtual {v0, p0, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 434
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    .line 435
    sput-object p0, Lcom/tkay/core/common/l/d;->l:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    .line 442
    :cond_2
    sget-object p0, Lcom/tkay/core/common/l/d;->l:Ljava/lang/String;

    return-object p0

    :catch_0
    move-exception p0

    .line 438
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v1
.end method

.method public static l()Ljava/lang/String;
    .locals 2

    .line 1074
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->c()Ljava/lang/String;

    move-result-object v0

    .line 1075
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    return-object v0

    .line 1079
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->l()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_1

    const-string v1, "wechat_app_id"

    .line 1081
    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1083
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    .line 1087
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public static l(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 453
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "it_src"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    if-nez p0, :cond_1

    .line 458
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    .line 462
    :cond_1
    :try_start_0
    sget-object v0, Lcom/tkay/core/common/l/d;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 463
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-static {p0}, Lcom/tkay/core/common/l/d;->k(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Landroid/content/pm/PackageManager;->getInstallerPackageName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 464
    sput-object p0, Lcom/tkay/core/common/l/d;->b:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    .line 473
    :cond_2
    sget-object p0, Lcom/tkay/core/common/l/d;->b:Ljava/lang/String;

    return-object p0

    :catch_0
    return-object v1
.end method

.method public static m()I
    .locals 2

    .line 1093
    sget v0, Lcom/tkay/core/common/l/d;->v:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    return v0

    :cond_0
    const/4 v0, 0x0

    .line 1096
    sput v0, Lcom/tkay/core/common/l/d;->v:I

    :try_start_0
    const-string v0, "com.tencent.mm.opensdk.constants.Build"

    .line 1099
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "SDK_INT"

    .line 1100
    invoke-virtual {v0, v1}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    const/4 v1, 0x0

    .line 1101
    invoke-virtual {v0, v1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    sput v0, Lcom/tkay/core/common/l/d;->v:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1107
    :catchall_0
    sget v0, Lcom/tkay/core/common/l/d;->v:I

    return v0
.end method

.method public static m(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    .line 532
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "network_type"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    .line 537
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-nez v0, :cond_1

    return-object v1

    :cond_1
    const-string v0, "-1"

    if-nez p0, :cond_2

    return-object v0

    :cond_2
    :try_start_1
    const-string v1, "connectivity"

    .line 550
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/net/ConnectivityManager;

    if-nez v1, :cond_3

    return-object v0

    :cond_3
    const-string v2, "android.permission.ACCESS_NETWORK_STATE"

    .line 554
    invoke-static {v2, p0}, Lcom/tkay/core/common/l/h;->a(Ljava/lang/String;Landroid/content/Context;)Z

    move-result v2

    if-eqz v2, :cond_8

    .line 556
    invoke-virtual {v1}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v1

    if-nez v1, :cond_4

    return-object v0

    .line 560
    :cond_4
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getType()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_5

    const-string p0, "-2"

    return-object p0

    :cond_5
    const-string v1, "phone"

    .line 563
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    if-nez p0, :cond_6

    return-object v0

    .line 567
    :cond_6
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getNetworkType()I

    move-result p0

    .line 568
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const/16 v3, 0x14

    if-eq p0, v3, :cond_7

    packed-switch p0, :pswitch_data_0

    const/4 v2, -0x1

    goto :goto_0

    :pswitch_0
    const/16 v2, 0xd

    goto :goto_0

    :pswitch_1
    const/4 v2, 0x3

    goto :goto_0

    :cond_7
    const/16 v2, 0x10

    :goto_0
    :pswitch_2
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object p0

    :cond_8
    return-object v0

    :catch_0
    move-exception p0

    .line 571
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v0

    :catch_1
    return-object v1

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_2
        :pswitch_2
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_1
        :pswitch_1
        :pswitch_2
        :pswitch_1
        :pswitch_0
        :pswitch_1
        :pswitch_1
    .end packed-switch
.end method

.method private static n()I
    .locals 1

    .line 677
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    return v0
.end method

.method public static n(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    .line 712
    sget-object v0, Lcom/tkay/core/common/l/d;->q:Ljava/lang/String;

    const-string v1, ""

    if-nez v0, :cond_1

    .line 714
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const-string v0, "com.android.vending"

    const/4 v2, 0x0

    .line 715
    invoke-virtual {p0, v0, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 716
    iget-object p0, p0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    .line 717
    sput-object p0, Lcom/tkay/core/common/l/d;->q:Ljava/lang/String;

    if-nez p0, :cond_0

    .line 718
    sput-object v1, Lcom/tkay/core/common/l/d;->q:Ljava/lang/String;

    .line 720
    :cond_0
    sget-object p0, Lcom/tkay/core/common/l/d;->q:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    .line 723
    :catch_0
    sput-object v1, Lcom/tkay/core/common/l/d;->q:Ljava/lang/String;

    return-object v1

    :cond_1
    if-nez v0, :cond_2

    .line 728
    sput-object v1, Lcom/tkay/core/common/l/d;->q:Ljava/lang/String;

    .line 730
    :cond_2
    sget-object p0, Lcom/tkay/core/common/l/d;->q:Ljava/lang/String;

    return-object p0
.end method

.method public static o(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    .line 738
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v0

    if-nez v0, :cond_0

    const-string p0, ""

    return-object p0

    .line 742
    :cond_0
    sget-object v0, Lcom/tkay/core/common/l/d;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "window"

    .line 743
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/WindowManager;

    .line 744
    new-instance v0, Landroid/util/DisplayMetrics;

    invoke-direct {v0}, Landroid/util/DisplayMetrics;-><init>()V

    .line 745
    invoke-interface {p0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 746
    iget p0, v0, Landroid/util/DisplayMetrics;->density:F

    invoke-static {p0}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/tkay/core/common/l/d;->c:Ljava/lang/String;

    .line 749
    :cond_1
    sget-object p0, Lcom/tkay/core/common/l/d;->c:Ljava/lang/String;

    return-object p0
.end method

.method public static p(Landroid/content/Context;)V
    .locals 5

    .line 850
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "ua"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 855
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-nez v0, :cond_1

    return-void

    :cond_1
    const-string v0, ""

    const-string v1, "local_ua"

    const-string v2, "tkay_sdk"

    .line 862
    invoke-static {p0, v2, v1, v0}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/tkay/core/common/l/d;->i:Ljava/lang/String;

    const-string v3, "local_os"

    .line 863
    invoke-static {p0, v2, v3, v0}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 865
    sget-object v4, Lcom/tkay/core/common/l/d;->i:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    sget-object v4, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    return-void

    .line 868
    :cond_2
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v4

    if-eq v0, v4, :cond_4

    .line 869
    sget-object p0, Lcom/tkay/core/common/l/d;->i:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_3

    :cond_3
    return-void

    .line 876
    :cond_4
    :try_start_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x11

    if-lt v0, v4, :cond_5

    .line 877
    invoke-static {p0}, Landroid/webkit/WebSettings;->getDefaultUserAgent(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/l/d;->i:Ljava/lang/String;

    goto :goto_0

    .line 879
    :cond_5
    new-instance v0, Landroid/webkit/WebView;

    invoke-direct {v0, p0}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    .line 880
    invoke-static {v0}, Lcom/tkay/core/common/l/g;->a(Landroid/webkit/WebView;)V

    .line 881
    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebSettings;->getUserAgentString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/l/d;->i:Ljava/lang/String;

    .line 884
    :goto_0
    sget-object v0, Lcom/tkay/core/common/l/d;->i:Ljava/lang/String;

    invoke-static {p0, v2, v1, v0}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 885
    sget-object v0, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-static {p0, v2, v3, v0}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 894
    :catch_0
    :catchall_0
    sget-object p0, Lcom/tkay/core/common/l/d;->i:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_6

    :catch_1
    :cond_6
    return-void
.end method

.method public static declared-synchronized q(Landroid/content/Context;)V
    .locals 5

    const-class v0, Lcom/tkay/core/common/l/d;

    monitor-enter v0

    .line 904
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_0

    .line 905
    monitor-exit v0

    return-void

    :cond_0
    :try_start_1
    const-string v1, ""

    .line 910
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 912
    invoke-interface {v2, p0}, Lcom/tkay/core/api/IExHandler;->getUniqueId(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    .line 915
    :cond_1
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 916
    invoke-static {p0}, Lcom/tkay/core/common/l/d;->r(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    .line 919
    :cond_2
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    const-string v2, "^[0-]+$"

    .line 3002
    invoke-static {v2, v1}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 920
    :cond_3
    invoke-static {p0}, Lcom/tkay/core/common/l/d;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    .line 922
    :cond_4
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_5

    .line 924
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object p0

    invoke-virtual {p0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v1

    .line 926
    :cond_5
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-static {v1}, Lcom/tkay/core/common/l/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/tkay/core/common/b/m;->k(Ljava/lang/String;)V

    const-string p0, ""

    const-string v1, "3"

    const-string v2, ""

    .line 929
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v3

    invoke-static {p0, v1, v2, v3}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 930
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static declared-synchronized r(Landroid/content/Context;)Ljava/lang/String;
    .locals 5

    const-class v0, Lcom/tkay/core/common/l/d;

    monitor-enter v0

    .line 940
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    const-string v2, "gaid"

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string p0, ""
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 941
    monitor-exit v0

    return-object p0

    :cond_0
    const/4 v1, 0x2

    .line 944
    :try_start_1
    invoke-static {v1}, Ljava/util/concurrent/Executors;->newFixedThreadPool(I)Ljava/util/concurrent/ExecutorService;

    move-result-object v1

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/String;

    .line 947
    new-instance v3, Lcom/tkay/core/common/l/d$1;

    invoke-direct {v3, p0, v2, v1}, Lcom/tkay/core/common/l/d$1;-><init>(Landroid/content/Context;[Ljava/lang/String;Ljava/util/concurrent/ExecutorService;)V

    invoke-interface {v1, v3}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 987
    :try_start_2
    monitor-enter v1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const-wide/16 v3, 0x7d0

    .line 988
    :try_start_3
    invoke-virtual {v1, v3, v4}, Ljava/lang/Object;->wait(J)V

    .line 989
    monitor-exit v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 990
    :try_start_4
    invoke-interface {v1}, Ljava/util/concurrent/ExecutorService;->shutdown()V

    const/4 p0, 0x0

    .line 991
    aget-object v1, v2, p0

    if-eqz v1, :cond_1

    aget-object p0, v2, p0
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    monitor-exit v0

    return-object p0

    :cond_1
    :try_start_5
    const-string p0, ""
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    .line 989
    :try_start_6
    monitor-exit v1

    throw p0
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_0
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    :catch_0
    :try_start_7
    const-string p0, ""
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    .line 997
    monitor-exit v0

    return-object p0

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static s(Landroid/content/Context;)I
    .locals 2

    .line 1046
    sget v0, Lcom/tkay/core/common/l/d;->t:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    const-string v0, "com.tencent.mm"

    .line 1047
    invoke-static {p0, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p0

    sput p0, Lcom/tkay/core/common/l/d;->t:I

    .line 1049
    :cond_0
    sget p0, Lcom/tkay/core/common/l/d;->t:I

    return p0
.end method

.method private static t(Landroid/content/Context;)I
    .locals 0

    if-nez p0, :cond_0

    .line 386
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    .line 388
    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    .line 389
    iget p0, p0, Landroid/util/DisplayMetrics;->widthPixels:I

    return p0
.end method

.method private static u(Landroid/content/Context;)I
    .locals 0

    if-nez p0, :cond_0

    .line 394
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    .line 396
    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    .line 397
    iget p0, p0, Landroid/util/DisplayMetrics;->heightPixels:I

    return p0
.end method

.method private static v(Landroid/content/Context;)I
    .locals 3

    const/4 v0, -0x1

    if-nez p0, :cond_0

    return v0

    :cond_0
    :try_start_0
    const-string v1, "connectivity"

    .line 500
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/net/ConnectivityManager;

    if-nez v1, :cond_1

    return v0

    :cond_1
    const-string v2, "android.permission.ACCESS_NETWORK_STATE"

    .line 504
    invoke-static {v2, p0}, Lcom/tkay/core/common/l/h;->a(Ljava/lang/String;Landroid/content/Context;)Z

    move-result v2

    if-eqz v2, :cond_5

    .line 506
    invoke-virtual {v1}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v1

    if-nez v1, :cond_2

    return v0

    .line 510
    :cond_2
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getType()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_3

    const/4 p0, -0x2

    return p0

    :cond_3
    const-string v1, "phone"

    .line 513
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/TelephonyManager;

    if-nez p0, :cond_4

    return v0

    .line 517
    :cond_4
    invoke-virtual {p0}, Landroid/telephony/TelephonyManager;->getNetworkType()I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :cond_5
    return v0

    :catch_0
    move-exception p0

    .line 521
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method private static w(Landroid/content/Context;)V
    .locals 3

    const-string v0, "tkay_sdk"

    const-string v1, "NETWORK_VERSION_NAME"

    const-string v2, ""

    .line 734
    invoke-static {p0, v0, v1, v2}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/tkay/core/common/l/d;->a:Ljava/lang/String;

    return-void
.end method
