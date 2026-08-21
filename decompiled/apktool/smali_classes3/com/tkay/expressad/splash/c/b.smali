.class public final Lcom/tkay/expressad/splash/c/b;
.super Ljava/lang/Object;


# static fields
.field private static a:Ljava/lang/String; = "ResManager"

.field private static b:I = 0x1

.field private static c:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 28
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/splash/c/b;->c:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/foundation/d/c;
    .locals 4

    .line 97
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v0

    const-string v3, "<MBTPLMARK>"

    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 101
    :cond_0
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/foundation/d/c;->a(Z)V

    .line 102
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/foundation/d/c;->b(Z)V

    goto :goto_1

    .line 98
    :cond_1
    :goto_0
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/foundation/d/c;->a(Z)V

    .line 99
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/foundation/d/c;->b(Z)V

    :goto_1
    return-object p0
.end method

.method static synthetic a()Ljava/util/concurrent/ConcurrentHashMap;
    .locals 1

    .line 24
    sget-object v0, Lcom/tkay/expressad/splash/c/b;->c:Ljava/util/concurrent/ConcurrentHashMap;

    return-object v0
.end method

.method public static a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/splash/view/a;)V
    .locals 3

    .line 204
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/splash/c/b$1;

    invoke-direct {v2, p1, p2, p0}, Lcom/tkay/expressad/splash/c/b$1;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/splash/view/a;Lcom/tkay/expressad/splash/view/TYSplashView;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 228
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    .line 229
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object p0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object p1

    new-instance p2, Lcom/tkay/expressad/splash/c/b$2;

    invoke-direct {p2}, Lcom/tkay/expressad/splash/c/b$2;-><init>()V

    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    :cond_0
    return-void
.end method

.method private static a(Lcom/tkay/expressad/splash/view/TYSplashView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZIZ)V
    .locals 1

    .line 243
    new-instance v0, Lcom/tkay/expressad/splash/c/e$c;

    invoke-direct {v0}, Lcom/tkay/expressad/splash/c/e$c;-><init>()V

    .line 244
    invoke-virtual {v0, p4}, Lcom/tkay/expressad/splash/c/e$c;->c(Ljava/lang/String;)V

    .line 245
    invoke-virtual {v0, p3}, Lcom/tkay/expressad/splash/c/e$c;->b(Ljava/lang/String;)V

    .line 246
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/splash/c/e$c;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 247
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/splash/c/e$c;->a(Ljava/lang/String;)V

    .line 248
    invoke-virtual {v0, p5}, Lcom/tkay/expressad/splash/c/e$c;->b(Z)V

    .line 249
    invoke-virtual {v0, p6}, Lcom/tkay/expressad/splash/c/e$c;->a(I)V

    .line 250
    invoke-virtual {v0, p7}, Lcom/tkay/expressad/splash/c/e$c;->a(Z)V

    .line 1033
    invoke-static {}, Lcom/tkay/expressad/splash/c/e$a;->a()Lcom/tkay/expressad/splash/c/e;

    move-result-object p1

    const/4 p2, 0x0

    .line 252
    invoke-virtual {p1, p0, v0, p2}, Lcom/tkay/expressad/splash/c/e;->a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/splash/c/e$c;Lcom/tkay/expressad/splash/c/e$b;)V

    return-void
.end method

.method public static a(Ljava/lang/String;)V
    .locals 1

    .line 309
    sget-object v0, Lcom/tkay/expressad/splash/c/b;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/foundation/d/c;)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x1

    .line 281
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 282
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->isVideoReady()Z

    move-result v1

    :cond_1
    if-eqz v1, :cond_2

    .line 285
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 286
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->isH5Ready()Z

    move-result v1

    :cond_2
    if-eqz v1, :cond_3

    .line 289
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 290
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->isH5Ready()Z

    move-result v1

    .line 293
    :cond_3
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_4

    move v1, v0

    .line 297
    :cond_4
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v2

    if-eqz v2, :cond_5

    .line 298
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_6

    .line 299
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/view/TYSplashView;->isImageReady()Z

    move-result v0

    goto :goto_0

    :cond_5
    move v0, v1

    :cond_6
    :goto_0
    return v0
.end method

.method private static b(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 260
    :try_start_0
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 261
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result p0

    if-eqz p0, :cond_0

    .line 262
    new-instance p0, Ljava/lang/StringBuilder;

    const-string v2, "file:///"

    invoke-direct {p0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 268
    :try_start_1
    throw p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    move-exception p0

    .line 270
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    return-object v0
.end method
