.class final Lcom/mbridge/msdk/c/b/a$a;
.super Ljava/lang/Object;
.source "ActiveAppUtil.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/c/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# static fields
.field private static final a:Lcom/mbridge/msdk/c/b/a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 43
    new-instance v0, Lcom/mbridge/msdk/c/b/a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/c/b/a;-><init>(Lcom/mbridge/msdk/c/b/a$1;)V

    sput-object v0, Lcom/mbridge/msdk/c/b/a$a;->a:Lcom/mbridge/msdk/c/b/a;

    return-void
.end method

.method static synthetic a()Lcom/mbridge/msdk/c/b/a;
    .locals 1

    .line 42
    sget-object v0, Lcom/mbridge/msdk/c/b/a$a;->a:Lcom/mbridge/msdk/c/b/a;

    return-object v0
.end method
