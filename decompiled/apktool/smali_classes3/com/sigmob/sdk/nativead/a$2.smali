.class Lcom/sigmob/sdk/nativead/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/nativead/m$e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/a;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/a;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/a$2;->a:Lcom/sigmob/sdk/nativead/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(ILjava/lang/String;)V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/a$2;->a:Lcom/sigmob/sdk/nativead/a;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v1, "dislike"

    const-string v2, "report"

    const-string v3, ""

    invoke-static {v0, v1, v2, p1, v3}, Lcom/sigmob/sdk/nativead/a;->a(Lcom/sigmob/sdk/nativead/a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a$2;->a:Lcom/sigmob/sdk/nativead/a;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/a;->b(Lcom/sigmob/sdk/nativead/a;)Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a$2;->a:Lcom/sigmob/sdk/nativead/a;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/a;->b(Lcom/sigmob/sdk/nativead/a;)Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;

    move-result-object p1

    const/4 v0, 0x4

    const/4 v1, 0x1

    invoke-interface {p1, v0, p2, v1}, Lcom/sigmob/windad/natives/WindNativeAdData$DislikeInteractionCallback;->onSelected(ILjava/lang/String;Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/a$2;->a:Lcom/sigmob/sdk/nativead/a;

    invoke-virtual {p1}, Lcom/sigmob/sdk/nativead/a;->dismiss()V

    :cond_0
    return-void
.end method
