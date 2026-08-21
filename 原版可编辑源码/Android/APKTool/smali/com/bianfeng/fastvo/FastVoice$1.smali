.class final Lcom/bianfeng/fastvo/FastVoice$1;
.super Ljava/lang/Object;
.source "FastVoice.java"

# interfaces
.implements Lcom/bianfeng/fastvo/audio/AudioPlayCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/fastvo/FastVoice;->startPlay(Lcom/bianfeng/fastvo/audio/PlayCallback;Ljava/lang/String;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$callback:Lcom/bianfeng/fastvo/audio/PlayCallback;


# direct methods
.method constructor <init>(Lcom/bianfeng/fastvo/audio/PlayCallback;)V
    .locals 0

    .line 196
    iput-object p1, p0, Lcom/bianfeng/fastvo/FastVoice$1;->val$callback:Lcom/bianfeng/fastvo/audio/PlayCallback;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onPlayComplete()V
    .locals 1

    const/4 v0, 0x0

    .line 200
    invoke-static {v0}, Lcom/bianfeng/fastvo/FastVoice;->access$302(Z)Z

    const-string v0, "onPlayComplete"

    .line 201
    invoke-static {v0}, Lcom/bianfeng/fastvo/util/LogUtil;->d(Ljava/lang/String;)V

    .line 202
    iget-object v0, p0, Lcom/bianfeng/fastvo/FastVoice$1;->val$callback:Lcom/bianfeng/fastvo/audio/PlayCallback;

    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/PlayCallback;->onPlayComplete()V

    return-void
.end method

.method public onPlayFail(ILjava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 207
    invoke-static {v0}, Lcom/bianfeng/fastvo/FastVoice;->access$302(Z)Z

    .line 208
    iget-object v0, p0, Lcom/bianfeng/fastvo/FastVoice$1;->val$callback:Lcom/bianfeng/fastvo/audio/PlayCallback;

    invoke-interface {v0, p1, p2}, Lcom/bianfeng/fastvo/audio/PlayCallback;->onPlayFail(ILjava/lang/String;)V

    return-void
.end method
