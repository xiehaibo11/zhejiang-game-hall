.class public final Lcom/tkay/china/b/a;
.super Ljava/lang/Object;


# static fields
.field private static a:Ljava/lang/String; = ""

.field private static b:Ljava/lang/String; = ""

.field private static c:Ljava/lang/String; = ""

.field private static d:Ljava/lang/String; = ""

.field private static e:Ljava/lang/String; = ""

.field private static f:Ljava/lang/String; = ""

.field private static g:Ljava/lang/String; = ""

.field private static h:Ljava/lang/String; = ""

.field private static i:Ljava/lang/String; = ""

.field private static j:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Ljava/lang/String;
    .locals 2

    .line 162
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "mac"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 165
    :cond_0
    sget-object v0, Lcom/tkay/china/b/a;->a:Ljava/lang/String;

    return-object v0
.end method

.method public static a(Landroid/content/Context;)V
    .locals 3

    const-string v0, ""

    const-string v1, "oaid"

    const-string v2, "tkay_sdk"

    .line 40
    invoke-static {p0, v2, v1, v0}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 42
    sput-object v2, Lcom/tkay/china/b/a;->c:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 43
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 44
    sget-object v1, Lcom/tkay/china/b/a;->c:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 45
    new-instance v1, Lcom/tkay/china/b/a$1;

    invoke-direct {v1, p0}, Lcom/tkay/china/b/a$1;-><init>(Landroid/content/Context;)V

    invoke-static {p0, v1}, Lcom/tkay/china/a/b;->a(Landroid/content/Context;Lcom/tkay/china/a/a;)V

    .line 1090
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    const-string v2, "mac"

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_0

    .line 1095
    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-ge v0, v1, :cond_2

    .line 1096
    invoke-static {p0}, Lcom/tkay/china/b/d;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 1098
    :cond_2
    invoke-static {}, Lcom/tkay/china/b/d;->a()Ljava/lang/String;

    move-result-object v0

    .line 65
    :goto_0
    sput-object v0, Lcom/tkay/china/b/a;->a:Ljava/lang/String;

    .line 66
    invoke-static {p0}, Lcom/tkay/china/b/a;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/china/b/a;->b:Ljava/lang/String;

    .line 68
    invoke-static {}, Lcom/tkay/china/b/b;->a()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/china/b/a;->d:Ljava/lang/String;

    .line 69
    invoke-static {p0}, Lcom/tkay/china/b/b;->c(Landroid/content/Context;)[Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_3

    .line 70
    array-length v0, p0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_3

    const/4 v0, 0x0

    .line 71
    aget-object v0, p0, v0

    sput-object v0, Lcom/tkay/china/b/a;->e:Ljava/lang/String;

    const/4 v0, 0x1

    .line 72
    aget-object p0, p0, v0

    sput-object p0, Lcom/tkay/china/b/a;->f:Ljava/lang/String;

    .line 74
    :cond_3
    invoke-static {}, Lcom/tkay/china/b/b;->b()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/tkay/china/b/a;->g:Ljava/lang/String;

    .line 76
    invoke-static {}, Lcom/tkay/china/b/b;->c()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/tkay/china/b/a;->h:Ljava/lang/String;

    .line 77
    invoke-static {}, Lcom/tkay/china/b/b;->d()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/tkay/china/b/a;->i:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Ljava/lang/String;)Z
    .locals 1

    const-string v0, "^[0-]+$"

    .line 1158
    invoke-static {v0, p0}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result p0

    return p0
.end method

.method public static b()Ljava/lang/String;
    .locals 2

    .line 180
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "oaid"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 183
    :cond_0
    sget-object v0, Lcom/tkay/china/b/a;->c:Ljava/lang/String;

    return-object v0
.end method

.method public static b(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    .line 82
    invoke-static {p0}, Lcom/tkay/china/b/a;->d(Landroid/content/Context;)Ljava/lang/String;

    .line 84
    sget-object v0, Lcom/tkay/china/b/a;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 85
    sget-object p0, Lcom/tkay/china/b/a;->b:Ljava/lang/String;

    return-object p0

    .line 88
    :cond_0
    invoke-static {p0}, Lcom/tkay/china/b/a;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    .line 89
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    return-object p0

    :cond_1
    const-string p0, ""

    return-object p0
.end method

.method static synthetic b(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 23
    sput-object p0, Lcom/tkay/china/b/a;->c:Ljava/lang/String;

    return-object p0
.end method

.method public static c()Ljava/lang/String;
    .locals 2

    .line 187
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "wifi_name"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    return-object v0

    .line 190
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/china/b/b;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static c(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    .line 99
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    const-string v1, "oaid"

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 100
    sget-object v0, Lcom/tkay/china/b/a;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 101
    sget-object p0, Lcom/tkay/china/b/a;->c:Ljava/lang/String;

    return-object p0

    :cond_0
    const-string v0, "tkay_sdk"

    const-string v1, "oaid"

    const-string v2, ""

    .line 104
    invoke-static {p0, v0, v1, v2}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 106
    sput-object v0, Lcom/tkay/china/b/a;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 107
    sget-object p0, Lcom/tkay/china/b/a;->c:Ljava/lang/String;

    return-object p0

    .line 110
    :cond_1
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    const/4 v1, 0x1

    new-array v1, v1, [Z

    const/4 v2, 0x0

    aput-boolean v2, v1, v2

    .line 112
    new-instance v3, Lcom/tkay/china/b/a$2;

    invoke-direct {v3, p0, v0, v1}, Lcom/tkay/china/b/a$2;-><init>(Landroid/content/Context;Ljava/lang/Object;[Z)V

    invoke-static {p0, v3}, Lcom/tkay/china/a/b;->a(Landroid/content/Context;Lcom/tkay/china/a/a;)V

    .line 143
    aget-boolean p0, v1, v2

    if-nez p0, :cond_2

    .line 145
    :try_start_0
    monitor-enter v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-wide/16 v1, 0x5dc

    .line 146
    :try_start_1
    invoke-virtual {v0, v1, v2}, Ljava/lang/Object;->wait(J)V

    .line 147
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    :try_start_2
    monitor-exit v0

    throw p0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    .line 152
    :catch_0
    :cond_2
    :goto_0
    sget-object p0, Lcom/tkay/china/b/a;->c:Ljava/lang/String;

    if-eqz p0, :cond_3

    return-object p0

    :cond_3
    const-string p0, ""

    return-object p0

    :cond_4
    const-string p0, ""

    return-object p0
.end method

.method private static c(Ljava/lang/String;)Z
    .locals 1

    const-string v0, "^[0-]+$"

    .line 158
    invoke-static {v0, p0}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result p0

    return p0
.end method

.method public static d()Ljava/lang/String;
    .locals 1

    .line 194
    sget-object v0, Lcom/tkay/china/b/a;->d:Ljava/lang/String;

    return-object v0
.end method

.method public static declared-synchronized d(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    const-class v0, Lcom/tkay/china/b/a;

    monitor-enter v0

    .line 169
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    const-string v2, "imei"

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string p0, ""
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 170
    monitor-exit v0

    return-object p0

    .line 172
    :cond_0
    :try_start_1
    sget-boolean v1, Lcom/tkay/china/b/a;->j:Z

    if-nez v1, :cond_1

    sget-object v1, Lcom/tkay/china/b/a;->b:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "android.permission.READ_PHONE_STATE"

    invoke-static {p0, v1}, Lcom/tkay/china/common/d;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 173
    invoke-static {p0}, Lcom/tkay/china/b/c;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/tkay/china/b/a;->b:Ljava/lang/String;

    const/4 p0, 0x1

    .line 174
    sput-boolean p0, Lcom/tkay/china/b/a;->j:Z

    .line 176
    :cond_1
    sget-object p0, Lcom/tkay/china/b/a;->b:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static e()Ljava/lang/String;
    .locals 1

    .line 198
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/china/b/b;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static f()Ljava/lang/String;
    .locals 1

    .line 202
    sget-object v0, Lcom/tkay/china/b/a;->e:Ljava/lang/String;

    return-object v0
.end method

.method public static g()Ljava/lang/String;
    .locals 1

    .line 206
    sget-object v0, Lcom/tkay/china/b/a;->f:Ljava/lang/String;

    return-object v0
.end method

.method public static h()Ljava/lang/String;
    .locals 1

    .line 210
    sget-object v0, Lcom/tkay/china/b/a;->g:Ljava/lang/String;

    return-object v0
.end method

.method public static i()Ljava/lang/String;
    .locals 1

    .line 214
    sget-object v0, Lcom/tkay/china/b/a;->h:Ljava/lang/String;

    return-object v0
.end method

.method public static j()Ljava/lang/String;
    .locals 1

    .line 218
    sget-object v0, Lcom/tkay/china/b/a;->i:Ljava/lang/String;

    return-object v0
.end method
