.class Lcom/sigmob/sdk/videoAd/i;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/Error;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/lang/Error;

    const-string v1, "load ad error"

    invoke-direct {v0, v1}, Ljava/lang/Error;-><init>(Ljava/lang/String;)V

    sput-object v0, Lcom/sigmob/sdk/videoAd/i;->a:Ljava/lang/Error;

    return-void
.end method

.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
