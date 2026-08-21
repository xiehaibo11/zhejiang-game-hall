.class final Lcom/kwad/components/ad/f/c$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/c;->loadNativeAd(Ljava/lang/String;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic bW:Ljava/util/List;

.field final synthetic mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;Ljava/util/List;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/c$5;->mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;

    iput-object p2, p0, Lcom/kwad/components/ad/f/c$5;->bW:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/c$5;->mt:Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;

    iget-object v1, p0, Lcom/kwad/components/ad/f/c$5;->bW:Ljava/util/List;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;->onNativeAdLoad(Ljava/util/List;)V

    return-void
.end method
