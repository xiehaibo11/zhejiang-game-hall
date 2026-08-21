.class final Lcom/kwad/components/ad/fullscreen/c/c/b$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/fullscreen/c/c/b;->ce()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

.field final synthetic hp:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/fullscreen/c/c/b;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$5;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    iput-object p2, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$5;->hp:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    sget-object v0, Lcom/kwad/sdk/core/imageloader/ImageLoaderProxy;->INSTANCE:Lcom/kwad/sdk/core/imageloader/ImageLoaderProxy;

    iget-object v1, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$5;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {v1}, Lcom/kwad/components/ad/fullscreen/c/c/b;->d(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/widget/ImageView;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$5;->hp:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/imageloader/ImageLoaderProxy;->load(Landroid/widget/ImageView;Ljava/lang/Object;)V

    return-void
.end method
