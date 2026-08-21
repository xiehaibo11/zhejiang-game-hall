.class final Lcom/tkay/expressad/video/bt/a/b$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/bt/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# static fields
.field private static a:Lcom/tkay/expressad/video/bt/a/b;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 26
    new-instance v0, Lcom/tkay/expressad/video/bt/a/b;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/bt/a/b;-><init>(B)V

    sput-object v0, Lcom/tkay/expressad/video/bt/a/b$a;->a:Lcom/tkay/expressad/video/bt/a/b;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/tkay/expressad/video/bt/a/b;
    .locals 1

    .line 25
    sget-object v0, Lcom/tkay/expressad/video/bt/a/b$a;->a:Lcom/tkay/expressad/video/bt/a/b;

    return-object v0
.end method
