.class Lcom/sigmob/sdk/videoAd/l$11;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l;->K()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoAd/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$11;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/l$11;->a:Lcom/sigmob/sdk/videoAd/l;

    const-string v1, "com.sigmob.action.interstitial.click"

    invoke-static {v0, v1}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;Ljava/lang/String;)V

    return-void
.end method
