.class final Lcom/tkay/expressad/video/bt/a/c$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/bt/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# static fields
.field private static a:Lcom/tkay/expressad/video/bt/a/c;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 89
    new-instance v0, Lcom/tkay/expressad/video/bt/a/c;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/bt/a/c;-><init>(B)V

    sput-object v0, Lcom/tkay/expressad/video/bt/a/c$a;->a:Lcom/tkay/expressad/video/bt/a/c;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 88
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/tkay/expressad/video/bt/a/c;
    .locals 1

    .line 88
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c$a;->a:Lcom/tkay/expressad/video/bt/a/c;

    return-object v0
.end method
