.class public final Lcom/tkay/core/basead/a/a;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String; = "play.google.com"

.field public static final b:Ljava/lang/String; = "market.android.com"

.field public static final c:Ljava/lang/String; = "details?"

.field public static final d:Ljava/lang/String; = "market"

.field public static final e:Ljava/lang/String; = "market://"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/core/common/f/an;
    .locals 6

    .line 89
    new-instance v0, Lcom/tkay/core/common/f/an;

    invoke-direct {v0}, Lcom/tkay/core/common/f/an;-><init>()V

    const-string v1, "http"

    .line 90
    invoke-virtual {p1, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    const/4 v3, 0x1

    xor-int/2addr v2, v3

    iput-boolean v2, v0, Lcom/tkay/core/common/f/an;->n:Z

    .line 91
    iput-object p1, v0, Lcom/tkay/core/common/f/an;->o:Ljava/lang/String;

    .line 93
    invoke-static {p1}, Lcom/tkay/core/basead/a/a;->d(Ljava/lang/String;)Z

    move-result v2

    const/4 v4, 0x0

    if-eqz v2, :cond_3

    .line 94
    iput-object p1, v0, Lcom/tkay/core/common/f/an;->o:Ljava/lang/String;

    .line 95
    invoke-static {p0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v1

    .line 97
    invoke-virtual {v1}, Lcom/tkay/core/c/a;->l()Ljava/lang/String;

    move-result-object v1

    const-string v2, "1"

    invoke-static {v1, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    .line 100
    invoke-static {p0, p1, v4, v1}, Lcom/tkay/core/basead/a/a;->a(Landroid/content/Context;Ljava/lang/String;ZZ)Z

    move-result v2

    const/4 v5, 0x4

    if-eqz v2, :cond_1

    .line 101
    iput-boolean v3, v0, Lcom/tkay/core/common/f/an;->m:Z

    if-eqz v1, :cond_0

    const/4 p0, 0x3

    .line 103
    iput p0, v0, Lcom/tkay/core/common/f/an;->l:I

    goto :goto_0

    .line 105
    :cond_0
    iput v5, v0, Lcom/tkay/core/common/f/an;->l:I

    goto :goto_0

    .line 112
    :cond_1
    invoke-static {p0, p1, v4, v4}, Lcom/tkay/core/basead/a/a;->a(Landroid/content/Context;Ljava/lang/String;ZZ)Z

    move-result p0

    if-eqz p0, :cond_2

    .line 113
    iput-boolean v3, v0, Lcom/tkay/core/common/f/an;->m:Z

    .line 114
    iput v5, v0, Lcom/tkay/core/common/f/an;->l:I

    :cond_2
    :goto_0
    return-object v0

    .line 130
    :cond_3
    invoke-virtual {p1, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_5

    .line 131
    iput-object p1, v0, Lcom/tkay/core/common/f/an;->o:Ljava/lang/String;

    .line 132
    invoke-static {p0, p1, v4, v4}, Lcom/tkay/core/basead/a/a;->a(Landroid/content/Context;Ljava/lang/String;ZZ)Z

    move-result p0

    if-eqz p0, :cond_4

    .line 133
    iput-boolean v3, v0, Lcom/tkay/core/common/f/an;->m:Z

    const/4 p0, 0x5

    .line 134
    iput p0, v0, Lcom/tkay/core/common/f/an;->l:I

    :cond_4
    return-object v0

    .line 148
    :cond_5
    invoke-static {p1}, Lcom/tkay/core/basead/a/a;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_7

    .line 149
    invoke-static {p1}, Lcom/tkay/core/basead/a/a;->f(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 150
    iput-boolean v3, v0, Lcom/tkay/core/common/f/an;->n:Z

    .line 151
    iput-object p1, v0, Lcom/tkay/core/common/f/an;->o:Ljava/lang/String;

    .line 152
    invoke-static {p0, p1, v4, v3}, Lcom/tkay/core/basead/a/a;->a(Landroid/content/Context;Ljava/lang/String;ZZ)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 153
    iput-boolean v3, v0, Lcom/tkay/core/common/f/an;->m:Z

    .line 154
    iput v3, v0, Lcom/tkay/core/common/f/an;->l:I

    goto :goto_1

    .line 159
    :cond_6
    invoke-static {p0, p1, v4, v4}, Lcom/tkay/core/basead/a/a;->a(Landroid/content/Context;Ljava/lang/String;ZZ)Z

    move-result p0

    if-eqz p0, :cond_7

    .line 160
    iput-boolean v3, v0, Lcom/tkay/core/common/f/an;->m:Z

    const/4 p0, 0x2

    .line 161
    iput p0, v0, Lcom/tkay/core/common/f/an;->l:I

    :cond_7
    :goto_1
    return-object v0
.end method

.method public static a(Ljava/lang/String;)Lcom/tkay/core/common/f/an;
    .locals 5

    .line 35
    new-instance v0, Lcom/tkay/core/common/f/an;

    invoke-direct {v0}, Lcom/tkay/core/common/f/an;-><init>()V

    const/16 v1, 0x8

    .line 36
    iput v1, v0, Lcom/tkay/core/common/f/an;->l:I

    const/4 v1, 0x0

    .line 37
    iput-boolean v1, v0, Lcom/tkay/core/common/f/an;->n:Z

    const/4 v1, 0x1

    .line 38
    iput-boolean v1, v0, Lcom/tkay/core/common/f/an;->m:Z

    .line 39
    iput-object p0, v0, Lcom/tkay/core/common/f/an;->o:Ljava/lang/String;

    .line 41
    :try_start_0
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    .line 42
    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v2

    const-string v3, "intent"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 44
    invoke-static {p0, v1}, Landroid/content/Intent;->parseUri(Ljava/lang/String;I)Landroid/content/Intent;

    move-result-object v1

    const-string v2, "android.intent.category.BROWSABLE"

    .line 47
    invoke-virtual {v1, v2}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    const/4 v2, 0x0

    .line 49
    invoke-virtual {v1, v2}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 51
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0xf

    if-lt v3, v4, :cond_0

    .line 52
    invoke-virtual {v1, v2}, Landroid/content/Intent;->setSelector(Landroid/content/Intent;)V

    :cond_0
    const-string v2, "browser_fallback_url"

    .line 54
    invoke-virtual {v1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 55
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, "http"

    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    const/16 v2, 0xa

    .line 56
    iput v2, v0, Lcom/tkay/core/common/f/an;->l:I

    .line 57
    iput-object v1, v0, Lcom/tkay/core/common/f/an;->o:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    .line 71
    :catchall_0
    :cond_1
    invoke-static {p0}, Lcom/tkay/core/basead/a/a;->d(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 72
    invoke-static {p0}, Lcom/tkay/core/basead/a/a;->e(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const/16 v1, 0x9

    .line 73
    iput v1, v0, Lcom/tkay/core/common/f/an;->l:I

    .line 74
    iput-object p0, v0, Lcom/tkay/core/common/f/an;->o:Ljava/lang/String;

    :cond_2
    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Z)Z
    .locals 5

    .line 184
    invoke-static {p1}, Lcom/tkay/core/basead/a/a;->b(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 185
    invoke-static {p1}, Lcom/tkay/core/basead/a/a;->f(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 186
    invoke-static {p0, p1, p2, v1}, Lcom/tkay/core/basead/a/a;->a(Landroid/content/Context;Ljava/lang/String;ZZ)Z

    move-result p0

    return p0

    .line 189
    :cond_0
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 190
    invoke-virtual {v0}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    const-string v3, "http"

    .line 191
    invoke-virtual {v0, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_2

    .line 192
    invoke-static {p0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v3

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v3

    const-string v4, "market"

    .line 194
    invoke-virtual {v0, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {v3}, Lcom/tkay/core/c/a;->l()Ljava/lang/String;

    move-result-object v0

    const-string v3, "1"

    invoke-static {v0, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    move v1, v2

    .line 197
    :goto_0
    invoke-static {p0, p1, p2, v1}, Lcom/tkay/core/basead/a/a;->a(Landroid/content/Context;Ljava/lang/String;ZZ)Z

    move-result p0

    return p0

    :cond_2
    return v2
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;ZZ)Z
    .locals 4

    .line 279
    :try_start_0
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 280
    invoke-virtual {v0}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v1

    const-string v2, "intent"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    .line 281
    invoke-static {p1, v2}, Landroid/content/Intent;->parseUri(Ljava/lang/String;I)Landroid/content/Intent;

    move-result-object p1

    const-string v0, "android.intent.category.BROWSABLE"

    .line 284
    invoke-virtual {p1, v0}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    const/4 v0, 0x0

    .line 286
    invoke-virtual {p1, v0}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 288
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0xf

    if-lt v1, v3, :cond_1

    .line 289
    invoke-virtual {p1, v0}, Landroid/content/Intent;->setSelector(Landroid/content/Intent;)V

    goto :goto_0

    .line 292
    :cond_0
    new-instance p1, Landroid/content/Intent;

    const-string v1, "android.intent.action.VIEW"

    invoke-direct {p1, v1, v0}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    .line 293
    invoke-virtual {p1, v0}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    :cond_1
    :goto_0
    if-eqz p3, :cond_2

    .line 297
    invoke-virtual {p1}, Landroid/content/Intent;->getPackage()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_2

    const-string p3, "com.android.vending"

    .line 298
    invoke-virtual {p1, p3}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    :cond_2
    const/high16 p3, 0x10000000

    .line 301
    invoke-virtual {p1, p3}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 302
    invoke-virtual {p0, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v2

    :catchall_0
    if-eqz p2, :cond_3

    .line 305
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance p2, Lcom/tkay/core/basead/a/a$1;

    invoke-direct {p2, p0}, Lcom/tkay/core/basead/a/a$1;-><init>(Landroid/content/Context;)V

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    :cond_3
    const/4 p0, 0x0

    return p0
.end method

.method public static b(Ljava/lang/String;)Z
    .locals 3

    const/4 v0, 0x0

    .line 215
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return v0

    .line 218
    :cond_0
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    if-eqz p0, :cond_4

    .line 219
    invoke-virtual {p0}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object v1

    if-nez v1, :cond_1

    goto :goto_1

    .line 222
    :cond_1
    invoke-virtual {p0}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object v1

    const-string v2, "play.google.com"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 223
    invoke-virtual {p0}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object p0

    const-string v1, "market.android.com"

    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_2

    goto :goto_0

    :cond_2
    return v0

    :cond_3
    :goto_0
    const/4 p0, 0x1

    return p0

    :catchall_0
    :cond_4
    :goto_1
    return v0
.end method

.method private static c(Ljava/lang/String;)V
    .locals 0

    .line 204
    invoke-static {p0}, Lcom/tkay/core/common/l/l;->a(Ljava/lang/String;)V

    return-void
.end method

.method private static d(Ljava/lang/String;)Z
    .locals 1

    .line 231
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 232
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    .line 233
    invoke-virtual {p0}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object p0

    const-string v0, "market"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static e(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    :try_start_0
    const-string v0, "market://details?id="

    const-string v1, ""

    .line 243
    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "https://play.google.com/store/apps/details?id="

    .line 244
    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-object p0
.end method

.method private static f(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    :try_start_0
    const-string v0, "details?"

    .line 260
    invoke-virtual {p0, v0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    const-string v0, "market://"

    .line 261
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    const/4 p0, 0x0

    return-object p0
.end method
