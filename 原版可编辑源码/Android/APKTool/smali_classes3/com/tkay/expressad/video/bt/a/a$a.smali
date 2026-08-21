.class final Lcom/tkay/expressad/video/bt/a/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/bt/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# static fields
.field private static a:Lcom/tkay/expressad/video/bt/a/a;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 28
    new-instance v0, Lcom/tkay/expressad/video/bt/a/a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/bt/a/a;-><init>()V

    sput-object v0, Lcom/tkay/expressad/video/bt/a/a$a;->a:Lcom/tkay/expressad/video/bt/a/a;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/tkay/expressad/video/bt/a/a;
    .locals 1

    .line 27
    sget-object v0, Lcom/tkay/expressad/video/bt/a/a$a;->a:Lcom/tkay/expressad/video/bt/a/a;

    return-object v0
.end method
