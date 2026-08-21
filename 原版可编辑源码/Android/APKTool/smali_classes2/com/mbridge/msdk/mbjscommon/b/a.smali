.class public final Lcom/mbridge/msdk/mbjscommon/b/a;
.super Ljava/lang/Object;
.source "Hack.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/mbjscommon/b/a$c;,
        Lcom/mbridge/msdk/mbjscommon/b/a$d;,
        Lcom/mbridge/msdk/mbjscommon/b/a$a;,
        Lcom/mbridge/msdk/mbjscommon/b/a$b;
    }
.end annotation


# static fields
.field private static a:Lcom/mbridge/msdk/mbjscommon/b/a$a;


# direct methods
.method public static a(Ljava/lang/ClassLoader;Ljava/lang/String;)Lcom/mbridge/msdk/mbjscommon/b/a$c;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/ClassLoader;",
            "Ljava/lang/String;",
            ")",
            "Lcom/mbridge/msdk/mbjscommon/b/a$c<",
            "TT;>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/mbjscommon/b/a$b$a;
        }
    .end annotation

    .line 302
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/b/a$c;

    invoke-virtual {p0, p1}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbjscommon/b/a$c;-><init>(Ljava/lang/Class;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception p0

    .line 304
    new-instance p1, Lcom/mbridge/msdk/mbjscommon/b/a$b$a;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/mbjscommon/b/a$b$a;-><init>(Ljava/lang/Exception;)V

    invoke-static {p1}, Lcom/mbridge/msdk/mbjscommon/b/a;->b(Lcom/mbridge/msdk/mbjscommon/b/a$b$a;)V

    .line 305
    new-instance p0, Lcom/mbridge/msdk/mbjscommon/b/a$c;

    const/4 p1, 0x0

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/mbjscommon/b/a$c;-><init>(Ljava/lang/Class;)V

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbjscommon/b/a$b$a;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/mbjscommon/b/a$b$a;
        }
    .end annotation

    .line 14
    invoke-static {p0}, Lcom/mbridge/msdk/mbjscommon/b/a;->b(Lcom/mbridge/msdk/mbjscommon/b/a$b$a;)V

    return-void
.end method

.method private static b(Lcom/mbridge/msdk/mbjscommon/b/a$b$a;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/mbridge/msdk/mbjscommon/b/a$b$a;
        }
    .end annotation

    .line 310
    sget-object v0, Lcom/mbridge/msdk/mbjscommon/b/a;->a:Lcom/mbridge/msdk/mbjscommon/b/a$a;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Lcom/mbridge/msdk/mbjscommon/b/a$a;->a(Lcom/mbridge/msdk/mbjscommon/b/a$b$a;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    throw p0
.end method
