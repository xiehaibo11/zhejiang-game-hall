.class public final Lcom/tkay/china/a/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/china/a/b$a;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    .line 213
    :try_start_0
    new-instance v0, Lcom/tkay/china/a/b$a;

    invoke-direct {v0, p0}, Lcom/tkay/china/a/b$a;-><init>(Landroid/content/Context;)V

    iget-object p0, v0, Lcom/tkay/china/a/b$a;->b:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    const-string p0, ""

    return-object p0
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    :try_start_0
    const-string v0, "android.os.SystemProperties"

    .line 98
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "get"

    const/4 v2, 0x2

    new-array v3, v2, [Ljava/lang/Class;

    .line 99
    const-class v4, Ljava/lang/String;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    const-class v4, Ljava/lang/String;

    const/4 v6, 0x1

    aput-object v4, v3, v6

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v2, v2, [Ljava/lang/Object;

    aput-object p0, v2, v5

    const-string p0, "unknown"

    aput-object p0, v2, v6

    .line 100
    invoke-virtual {v1, v0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/china/a/a;)V
    .locals 14

    const/4 v0, 0x0

    .line 44
    :try_start_0
    invoke-static {p0}, Lcom/tkay/china/a/b;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 45
    :try_start_1
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 47
    invoke-interface {p1, v1, v0}, Lcom/tkay/china/a/a;->a(Ljava/lang/String;Z)V

    return-void

    .line 52
    :cond_0
    sget-object v2, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    const-string v3, "ro.build.freeme.label"

    .line 1083
    invoke-static {v3}, Lcom/tkay/china/a/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 1084
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    const/4 v5, 0x1

    if-nez v4, :cond_1

    const-string v4, "FREEMEOS"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    move v3, v5

    goto :goto_0

    :cond_1
    move v3, v0

    :goto_0
    if-eqz v3, :cond_2

    const-string v2, "FERRMEOS"

    goto :goto_2

    :cond_2
    const-string v3, "ro.ssui.product"

    .line 1088
    invoke-static {v3}, Lcom/tkay/china/a/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 1089
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    const-string v4, "unknown"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_3

    goto :goto_1

    :cond_3
    move v5, v0

    :goto_1
    if-eqz v5, :cond_4

    const-string v2, "SSUI"

    .line 59
    :cond_4
    :goto_2
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_8

    .line 60
    invoke-virtual {v2}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v2

    const-string v3, "ASUS"

    const-string v4, "HUAWEI"

    const-string v5, "OPPO"

    const-string v6, "ONEPLUS"

    const-string v7, "ZTE"

    const-string v8, "FERRMEOS"

    const-string v9, "SSUI"

    const-string v10, "SAMSUNG"

    const-string v11, "MEIZU"

    const-string v12, "MOTOLORA"

    const-string v13, "LENOVO"

    .line 61
    filled-new-array/range {v3 .. v13}, [Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v3

    .line 62
    invoke-interface {v3, v2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_5

    .line 1109
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v3

    new-instance v4, Lcom/tkay/china/a/b$1;

    invoke-direct {v4, p1, p0, v2}, Lcom/tkay/china/a/b$1;-><init>(Lcom/tkay/china/a/a;Landroid/content/Context;Ljava/lang/String;)V

    invoke-virtual {v3, v4}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    goto :goto_3

    :cond_5
    const-string v3, "VIVO"

    .line 64
    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_6

    .line 65
    new-instance v2, Lcom/tkay/china/a/a/k;

    invoke-direct {v2, p0}, Lcom/tkay/china/a/a/k;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2}, Lcom/tkay/china/a/a/k;->a()Ljava/lang/String;

    move-result-object v1

    goto :goto_3

    :cond_6
    const-string v3, "NUBIA"

    .line 66
    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_7

    .line 67
    new-instance v2, Lcom/tkay/china/a/a/f;

    invoke-direct {v2, p0}, Lcom/tkay/china/a/a/f;-><init>(Landroid/content/Context;)V

    invoke-virtual {v2}, Lcom/tkay/china/a/a/f;->a()Ljava/lang/String;

    move-result-object v1

    goto :goto_3

    .line 69
    :cond_7
    invoke-static {p0, p1}, Lcom/tkay/china/a/b;->c(Landroid/content/Context;Lcom/tkay/china/a/a;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_3

    :catchall_0
    const-string v1, ""

    .line 75
    :catchall_1
    :cond_8
    :goto_3
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_9

    .line 77
    invoke-interface {p1, v1, v0}, Lcom/tkay/china/a/a;->a(Ljava/lang/String;Z)V

    :cond_9
    return-void
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/china/a/a;)V
    .locals 2

    .line 109
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/china/a/b$1;

    invoke-direct {v1, p2, p0, p1}, Lcom/tkay/china/a/b$1;-><init>(Lcom/tkay/china/a/a;Landroid/content/Context;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic a(Lcom/bun/miitmdid/interfaces/IdSupplier;Lcom/tkay/china/a/a;)V
    .locals 1

    if-eqz p0, :cond_0

    .line 1199
    invoke-interface {p0}, Lcom/bun/miitmdid/interfaces/IdSupplier;->getOAID()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_0
    const-string p0, ""

    .line 1200
    :goto_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    if-eqz p1, :cond_2

    const/4 v0, 0x0

    .line 1202
    invoke-interface {p1, p0, v0}, Lcom/tkay/china/a/a;->a(Ljava/lang/String;Z)V

    return-void

    :cond_1
    if-eqz p1, :cond_2

    .line 1206
    invoke-interface {p1}, Lcom/tkay/china/a/a;->a()V

    :cond_2
    return-void
.end method

.method private static a()Z
    .locals 2

    const-string v0, "ro.build.freeme.label"

    .line 83
    invoke-static {v0}, Lcom/tkay/china/a/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 84
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "FREEMEOS"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic b(Landroid/content/Context;Lcom/tkay/china/a/a;)V
    .locals 0

    .line 33
    invoke-static {p0, p1}, Lcom/tkay/china/a/b;->c(Landroid/content/Context;Lcom/tkay/china/a/a;)V

    return-void
.end method

.method private static b(Lcom/bun/miitmdid/interfaces/IdSupplier;Lcom/tkay/china/a/a;)V
    .locals 1

    if-eqz p0, :cond_0

    .line 199
    invoke-interface {p0}, Lcom/bun/miitmdid/interfaces/IdSupplier;->getOAID()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_0
    const-string p0, ""

    .line 200
    :goto_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    if-eqz p1, :cond_2

    const/4 v0, 0x0

    .line 202
    invoke-interface {p1, p0, v0}, Lcom/tkay/china/a/a;->a(Ljava/lang/String;Z)V

    return-void

    :cond_1
    if-eqz p1, :cond_2

    .line 206
    invoke-interface {p1}, Lcom/tkay/china/a/a;->a()V

    :cond_2
    return-void
.end method

.method private static b()Z
    .locals 2

    const-string v0, "ro.ssui.product"

    .line 88
    invoke-static {v0}, Lcom/tkay/china/a/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 89
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "unknown"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private static c(Landroid/content/Context;Lcom/tkay/china/a/a;)V
    .locals 2

    .line 175
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/china/a/b$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/china/a/b$2;-><init>(Landroid/content/Context;Lcom/tkay/china/a/a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
