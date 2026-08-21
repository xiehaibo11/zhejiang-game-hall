.class final Lcom/tkay/expressad/videocommon/b/k$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/videocommon/b/k;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# static fields
.field public static a:Lcom/tkay/expressad/videocommon/b/k;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 28
    new-instance v0, Lcom/tkay/expressad/videocommon/b/k;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/videocommon/b/k;-><init>(B)V

    sput-object v0, Lcom/tkay/expressad/videocommon/b/k$a;->a:Lcom/tkay/expressad/videocommon/b/k;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
