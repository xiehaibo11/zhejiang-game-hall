.class public Lcom/tkay/core/common/i;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Lcom/tkay/core/common/i;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/core/common/i;
    .locals 2

    .line 29
    sget-object v0, Lcom/tkay/core/common/i;->a:Lcom/tkay/core/common/i;

    if-nez v0, :cond_1

    .line 30
    const-class v0, Lcom/tkay/core/common/i;

    monitor-enter v0

    .line 31
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/i;->a:Lcom/tkay/core/common/i;

    if-nez v1, :cond_0

    .line 32
    new-instance v1, Lcom/tkay/core/common/i;

    invoke-direct {v1}, Lcom/tkay/core/common/i;-><init>()V

    sput-object v1, Lcom/tkay/core/common/i;->a:Lcom/tkay/core/common/i;

    .line 33
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 35
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/i;->a:Lcom/tkay/core/common/i;

    return-object v0
.end method

.method public static a(Lcom/tkay/core/c/d;)Ljava/lang/String;
    .locals 1

    .line 83
    invoke-virtual {p0}, Lcom/tkay/core/c/d;->s()Ljava/lang/String;

    move-result-object p0

    .line 85
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, ""

    :cond_0
    return-object p0
.end method

.method public static a(Lcom/tkay/core/c/d;Z)Ljava/lang/String;
    .locals 0

    if-eqz p1, :cond_0

    .line 62
    invoke-virtual {p0}, Lcom/tkay/core/c/d;->w()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0}, Lcom/tkay/core/c/d;->ao()Ljava/lang/String;

    .line 63
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    return-object p1

    .line 68
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object p0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object p0

    .line 69
    invoke-virtual {p0}, Lcom/tkay/core/c/a;->r()Lcom/tkay/core/common/f/m;

    move-result-object p0

    .line 70
    invoke-static {}, Lcom/tkay/core/common/i;->m()Z

    move-result p1

    if-eqz p1, :cond_1

    const-string p1, "http://adx.anythinktech.com/bid"

    goto :goto_0

    :cond_1
    const-string p1, "https://adx.anythinktech.com/bid"

    :goto_0
    if-eqz p0, :cond_2

    .line 72
    invoke-virtual {p0}, Lcom/tkay/core/common/f/m;->c()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1}, Lcom/tkay/core/common/i;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    return-object p1
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    return-object p0
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 175
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p1

    :cond_0
    return-object p0
.end method

.method public static b()Ljava/lang/String;
    .locals 2

    .line 39
    invoke-static {}, Lcom/tkay/core/common/i;->m()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "http://api.anythinktech.com/v2/open/app"

    goto :goto_0

    :cond_0
    const-string v0, "https://api.anythinktech.com/v2/open/app"

    .line 40
    :goto_0
    invoke-static {}, Lcom/tkay/core/common/e/a;->a()Lcom/tkay/core/common/e/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/e/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static b(Lcom/tkay/core/c/d;)Ljava/lang/String;
    .locals 0

    .line 96
    invoke-virtual {p0}, Lcom/tkay/core/c/d;->r()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static c()Ljava/lang/String;
    .locals 2

    .line 44
    invoke-static {}, Lcom/tkay/core/common/i;->m()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "http://api.anythinktech.com/v2/open/placement"

    goto :goto_0

    :cond_0
    const-string v0, "https://api.anythinktech.com/v2/open/placement"

    .line 45
    :goto_0
    invoke-static {}, Lcom/tkay/core/common/e/a;->a()Lcom/tkay/core/common/e/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/e/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static d()Ljava/lang/String;
    .locals 1

    .line 49
    invoke-static {}, Lcom/tkay/core/common/i;->m()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "http://api.anythinktech.com/v2/open/eu"

    return-object v0

    :cond_0
    const-string v0, "https://api.anythinktech.com/v2/open/eu"

    return-object v0
.end method

.method public static e()Ljava/lang/String;
    .locals 1

    .line 55
    invoke-static {}, Lcom/tkay/core/common/i;->m()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "http://api.anythinktech.com/v2/open/area"

    return-object v0

    :cond_0
    const-string v0, "https://api.anythinktech.com/v2/open/area"

    return-object v0
.end method

.method public static f()Ljava/lang/String;
    .locals 2

    .line 102
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    .line 103
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->r()Lcom/tkay/core/common/f/m;

    move-result-object v0

    .line 104
    invoke-static {}, Lcom/tkay/core/common/i;->m()Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "http://adx.anythinktech.com/request"

    goto :goto_0

    :cond_0
    const-string v1, "https://adx.anythinktech.com/request"

    :goto_0
    if-eqz v0, :cond_1

    .line 106
    invoke-virtual {v0}, Lcom/tkay/core/common/f/m;->b()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/tkay/core/common/i;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    return-object v1
.end method

.method public static g()Ljava/lang/String;
    .locals 2

    .line 113
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    .line 114
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->r()Lcom/tkay/core/common/f/m;

    move-result-object v0

    .line 115
    invoke-static {}, Lcom/tkay/core/common/i;->m()Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "http://adxtk.anythinktech.com/v1"

    goto :goto_0

    :cond_0
    const-string v1, "https://adxtk.anythinktech.com/v1"

    :goto_0
    if-eqz v0, :cond_1

    .line 117
    invoke-virtual {v0}, Lcom/tkay/core/common/f/m;->d()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/tkay/core/common/i;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    return-object v1
.end method

.method public static h()Ljava/lang/String;
    .locals 2

    .line 123
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    .line 124
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->r()Lcom/tkay/core/common/f/m;

    move-result-object v0

    .line 125
    invoke-static {}, Lcom/tkay/core/common/i;->m()Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "http://adx.anythinktech.com/openapi/req"

    goto :goto_0

    :cond_0
    const-string v1, "https://adx.anythinktech.com/openapi/req"

    :goto_0
    if-eqz v0, :cond_1

    .line 127
    invoke-virtual {v0}, Lcom/tkay/core/common/f/m;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/tkay/core/common/i;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    return-object v1
.end method

.method public static i()Ljava/lang/String;
    .locals 2

    .line 133
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    .line 134
    invoke-static {}, Lcom/tkay/core/common/i;->m()Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "http://tk.anythinktech.com/ss/rrd"

    goto :goto_0

    :cond_0
    const-string v1, "https://tk.anythinktech.com/ss/rrd"

    :goto_0
    if-eqz v0, :cond_1

    .line 136
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/tkay/core/common/i;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    return-object v1
.end method

.method public static j()Ljava/lang/String;
    .locals 2

    .line 142
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    .line 143
    invoke-static {}, Lcom/tkay/core/common/i;->m()Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "http://tk.anythinktech.com/v1/open/tk"

    goto :goto_0

    :cond_0
    const-string v1, "https://tk.anythinktech.com/v1/open/tk"

    :goto_0
    if-eqz v0, :cond_1

    .line 145
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->X()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/tkay/core/common/i;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    return-object v1
.end method

.method public static k()Ljava/lang/String;
    .locals 2

    .line 151
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    .line 152
    invoke-static {}, Lcom/tkay/core/common/i;->m()Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "http://da.anythinktech.com/v1/open/da"

    goto :goto_0

    :cond_0
    const-string v1, "https://da.anythinktech.com/v1/open/da"

    :goto_0
    if-eqz v0, :cond_1

    .line 154
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->ac()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/tkay/core/common/i;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    return-object v1
.end method

.method public static l()Ljava/lang/String;
    .locals 2

    .line 160
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    const-string v1, "https://img.anythinktech.com/gdpr/PrivacyPolicySetting.html"

    if-eqz v0, :cond_0

    .line 162
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->T()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/tkay/core/common/i;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    return-object v1
.end method

.method private static m()Z
    .locals 1

    .line 192
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->C()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->B()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
