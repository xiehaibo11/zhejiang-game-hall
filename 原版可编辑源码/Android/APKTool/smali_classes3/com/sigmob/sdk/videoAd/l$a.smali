.class Lcom/sigmob/sdk/videoAd/l$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/videoAd/l;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getInteractionType()I
    .locals 1
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    invoke-static {}, Lcom/sigmob/sdk/videoAd/l;->y()I

    move-result v0

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    const-string v0, "4.9.0"

    return-object v0
.end method
