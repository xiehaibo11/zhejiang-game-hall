.class final Lcom/tkay/expressad/videocommon/b/j$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/videocommon/b/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# static fields
.field public static a:Lcom/tkay/expressad/videocommon/b/j;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 31
    new-instance v0, Lcom/tkay/expressad/videocommon/b/j;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/videocommon/b/j;-><init>(B)V

    sput-object v0, Lcom/tkay/expressad/videocommon/b/j$a;->a:Lcom/tkay/expressad/videocommon/b/j;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
