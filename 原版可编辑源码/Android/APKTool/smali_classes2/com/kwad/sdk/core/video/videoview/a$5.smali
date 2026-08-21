.class final Lcom/kwad/sdk/core/video/videoview/a$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/video/a/c$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/video/videoview/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic awe:Lcom/kwad/sdk/core/video/videoview/a;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/video/videoview/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final k(II)Z
    .locals 6

    const/4 v0, 0x4

    const-string v1, "KSVideoPlayerViewView"

    const/4 v2, 0x3

    if-ne p1, v2, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/video/videoview/a;->b(Lcom/kwad/sdk/core/video/videoview/a;I)I

    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1}, Lcom/kwad/sdk/core/video/videoview/a;->d(Lcom/kwad/sdk/core/video/videoview/a;)Lcom/kwad/sdk/core/video/videoview/b;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p2}, Lcom/kwad/sdk/core/video/videoview/a;->c(Lcom/kwad/sdk/core/video/videoview/a;)I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/video/videoview/b;->onPlayStateChanged(I)V

    const-string p1, "onInfo \u2014\u2014> MEDIA_INFO_VIDEO_RENDERING_START\uff1aSTATE_PLAYING"

    :goto_0
    invoke-static {v1, p1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_3

    :cond_0
    const/16 v2, 0x2bd

    const/4 v3, 0x6

    const/4 v4, 0x5

    const/4 v5, 0x7

    if-ne p1, v2, :cond_3

    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1}, Lcom/kwad/sdk/core/video/videoview/a;->c(Lcom/kwad/sdk/core/video/videoview/a;)I

    move-result p1

    if-eq p1, v4, :cond_2

    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1}, Lcom/kwad/sdk/core/video/videoview/a;->c(Lcom/kwad/sdk/core/video/videoview/a;)I

    move-result p1

    if-ne p1, v5, :cond_1

    goto :goto_1

    :cond_1
    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1, v3}, Lcom/kwad/sdk/core/video/videoview/a;->b(Lcom/kwad/sdk/core/video/videoview/a;I)I

    const-string p1, "onInfo \u2014\u2014> MEDIA_INFO_BUFFERING_START\uff1aSTATE_BUFFERING_PLAYING"

    goto :goto_2

    :cond_2
    :goto_1
    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1, v5}, Lcom/kwad/sdk/core/video/videoview/a;->b(Lcom/kwad/sdk/core/video/videoview/a;I)I

    const-string p1, "onInfo \u2014\u2014> MEDIA_INFO_BUFFERING_START\uff1aSTATE_BUFFERING_PAUSED"

    :goto_2
    invoke-static {v1, p1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1}, Lcom/kwad/sdk/core/video/videoview/a;->d(Lcom/kwad/sdk/core/video/videoview/a;)Lcom/kwad/sdk/core/video/videoview/b;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p2}, Lcom/kwad/sdk/core/video/videoview/a;->c(Lcom/kwad/sdk/core/video/videoview/a;)I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/video/videoview/b;->onPlayStateChanged(I)V

    goto/16 :goto_3

    :cond_3
    const/16 v2, 0x2be

    if-ne p1, v2, :cond_5

    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1}, Lcom/kwad/sdk/core/video/videoview/a;->c(Lcom/kwad/sdk/core/video/videoview/a;)I

    move-result p1

    if-ne p1, v3, :cond_4

    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/video/videoview/a;->b(Lcom/kwad/sdk/core/video/videoview/a;I)I

    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1}, Lcom/kwad/sdk/core/video/videoview/a;->d(Lcom/kwad/sdk/core/video/videoview/a;)Lcom/kwad/sdk/core/video/videoview/b;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p2}, Lcom/kwad/sdk/core/video/videoview/a;->c(Lcom/kwad/sdk/core/video/videoview/a;)I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/video/videoview/b;->onPlayStateChanged(I)V

    const-string p1, "onInfo \u2014\u2014> MEDIA_INFO_BUFFERING_END\uff1a STATE_PLAYING"

    invoke-static {v1, p1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1}, Lcom/kwad/sdk/core/video/videoview/a;->c(Lcom/kwad/sdk/core/video/videoview/a;)I

    move-result p1

    if-ne p1, v5, :cond_8

    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1, v4}, Lcom/kwad/sdk/core/video/videoview/a;->b(Lcom/kwad/sdk/core/video/videoview/a;I)I

    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1}, Lcom/kwad/sdk/core/video/videoview/a;->d(Lcom/kwad/sdk/core/video/videoview/a;)Lcom/kwad/sdk/core/video/videoview/b;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p2}, Lcom/kwad/sdk/core/video/videoview/a;->c(Lcom/kwad/sdk/core/video/videoview/a;)I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/video/videoview/b;->onPlayStateChanged(I)V

    const-string p1, "onInfo \u2014\u2014> MEDIA_INFO_BUFFERING_END\uff1a STATE_PAUSED"

    goto/16 :goto_0

    :cond_5
    const/16 v0, 0x2711

    if-ne p1, v0, :cond_6

    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1}, Lcom/kwad/sdk/core/video/videoview/a;->j(Lcom/kwad/sdk/core/video/videoview/a;)Lcom/kwad/sdk/core/video/a;

    move-result-object p1

    if-eqz p1, :cond_8

    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a$5;->awe:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-static {p1}, Lcom/kwad/sdk/core/video/videoview/a;->j(Lcom/kwad/sdk/core/video/videoview/a;)Lcom/kwad/sdk/core/video/a;

    move-result-object p1

    int-to-float v0, p2

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/video/a;->setRotation(F)V

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "\u89c6\u9891\u65cb\u8f6c\u89d2\u5ea6\uff1a"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto/16 :goto_0

    :cond_6
    const/16 p2, 0x321

    if-ne p1, p2, :cond_7

    const-string p1, "\u89c6\u9891\u4e0d\u80fdseekTo\uff0c\u4e3a\u76f4\u64ad\u89c6\u9891"

    goto/16 :goto_0

    :cond_7
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "onInfo \u2014\u2014> what\uff1a"

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto/16 :goto_0

    :cond_8
    :goto_3
    const/4 p1, 0x1

    return p1
.end method
