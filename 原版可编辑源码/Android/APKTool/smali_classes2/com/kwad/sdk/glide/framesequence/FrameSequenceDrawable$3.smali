.class final Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic aBZ:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$3;->aBZ:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$3;->aBZ:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;

    invoke-static {v0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->access$000(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)Ljava/lang/Object;

    move-result-object v0

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$3;->aBZ:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;

    const/4 v2, -0x1

    invoke-static {v1, v2}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->access$202(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;I)I

    iget-object v1, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$3;->aBZ:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;

    const/4 v2, 0x0

    invoke-static {v1, v2}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->access$402(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;I)I

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$3;->aBZ:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;

    invoke-static {v0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->access$900(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$3;->aBZ:Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;

    invoke-static {v0}, Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;->access$900(Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable;)Lcom/kwad/sdk/glide/framesequence/FrameSequenceDrawable$b;

    :cond_0
    return-void

    :catchall_0
    move-exception v1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method
