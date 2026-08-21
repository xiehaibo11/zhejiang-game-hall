.class final Lcom/kwad/components/core/b$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/b;->loadNativeAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic HQ:Lcom/kwad/components/core/b;

.field final synthetic mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/b;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/b$6;->HQ:Lcom/kwad/components/core/b;

    iput-object p2, p0, Lcom/kwad/components/core/b$6;->mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onError(ILjava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/b$6;->mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;->onError(ILjava/lang/String;)V

    return-void
.end method

.method public final onNativeAdLoad(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/api/KsNativeAd;",
            ">;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/core/b$6;->mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;->onNativeAdLoad(Ljava/util/List;)V

    return-void
.end method
