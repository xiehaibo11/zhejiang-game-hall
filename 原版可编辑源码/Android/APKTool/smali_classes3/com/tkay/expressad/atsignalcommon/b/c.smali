.class public final Lcom/tkay/expressad/atsignalcommon/b/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/atsignalcommon/b/c$c;,
        Lcom/tkay/expressad/atsignalcommon/b/c$d;,
        Lcom/tkay/expressad/atsignalcommon/b/c$f;,
        Lcom/tkay/expressad/atsignalcommon/b/c$e;,
        Lcom/tkay/expressad/atsignalcommon/b/c$a;,
        Lcom/tkay/expressad/atsignalcommon/b/c$b;
    }
.end annotation


# static fields
.field private static a:Lcom/tkay/expressad/atsignalcommon/b/c$a;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 260
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/Class;)Lcom/tkay/expressad/atsignalcommon/b/c$c;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;)",
            "Lcom/tkay/expressad/atsignalcommon/b/c$c<",
            "TT;>;"
        }
    .end annotation

    .line 231
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/b/c$c;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/atsignalcommon/b/c$c;-><init>(Ljava/lang/Class;)V

    return-object v0
.end method

.method public static a(Ljava/lang/ClassLoader;Ljava/lang/String;)Lcom/tkay/expressad/atsignalcommon/b/c$c;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/ClassLoader;",
            "Ljava/lang/String;",
            ")",
            "Lcom/tkay/expressad/atsignalcommon/b/c$c<",
            "TT;>;"
        }
    .end annotation

    .line 245
    :try_start_0
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/b/c$c;

    invoke-virtual {p0, p1}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    invoke-direct {v0, p0}, Lcom/tkay/expressad/atsignalcommon/b/c$c;-><init>(Ljava/lang/Class;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception p0

    .line 247
    new-instance p1, Lcom/tkay/expressad/atsignalcommon/b/c$b$a;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/atsignalcommon/b/c$b$a;-><init>(Ljava/lang/Exception;)V

    invoke-static {p1}, Lcom/tkay/expressad/atsignalcommon/b/c;->b(Lcom/tkay/expressad/atsignalcommon/b/c$b$a;)V

    .line 248
    new-instance p0, Lcom/tkay/expressad/atsignalcommon/b/c$c;

    const/4 p1, 0x0

    invoke-direct {p0, p1}, Lcom/tkay/expressad/atsignalcommon/b/c$c;-><init>(Ljava/lang/Class;)V

    return-object p0
.end method

.method private static a(Ljava/lang/String;)Lcom/tkay/expressad/atsignalcommon/b/c$c;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/String;",
            ")",
            "Lcom/tkay/expressad/atsignalcommon/b/c$c<",
            "TT;>;"
        }
    .end annotation

    .line 236
    :try_start_0
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/b/c$c;

    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    invoke-direct {v0, p0}, Lcom/tkay/expressad/atsignalcommon/b/c$c;-><init>(Ljava/lang/Class;)V
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception p0

    .line 238
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/b/c$b$a;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/atsignalcommon/b/c$b$a;-><init>(Ljava/lang/Exception;)V

    invoke-static {v0}, Lcom/tkay/expressad/atsignalcommon/b/c;->b(Lcom/tkay/expressad/atsignalcommon/b/c$b$a;)V

    .line 239
    new-instance p0, Lcom/tkay/expressad/atsignalcommon/b/c$c;

    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/tkay/expressad/atsignalcommon/b/c$c;-><init>(Ljava/lang/Class;)V

    return-object p0
.end method

.method private static a(Lcom/tkay/expressad/atsignalcommon/b/c$a;)V
    .locals 0

    .line 257
    sput-object p0, Lcom/tkay/expressad/atsignalcommon/b/c;->a:Lcom/tkay/expressad/atsignalcommon/b/c$a;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/atsignalcommon/b/c$b$a;)V
    .locals 0

    .line 12
    invoke-static {p0}, Lcom/tkay/expressad/atsignalcommon/b/c;->b(Lcom/tkay/expressad/atsignalcommon/b/c$b$a;)V

    return-void
.end method

.method private static b(Lcom/tkay/expressad/atsignalcommon/b/c$b$a;)V
    .locals 1

    .line 253
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/b/c;->a:Lcom/tkay/expressad/atsignalcommon/b/c$a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/tkay/expressad/atsignalcommon/b/c$a;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    throw p0
.end method
