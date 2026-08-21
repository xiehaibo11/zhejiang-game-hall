.class Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$1;
.super Ljava/lang/Object;
.source "SpeexEncoder.java"

# interfaces
.implements Lcom/bianfeng/fastvo/audio/spx/SpeexListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;


# direct methods
.method constructor <init>(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;)V
    .locals 0

    .line 37
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$1;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onError()V
    .locals 1

    .line 47
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$1;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;

    invoke-static {v0}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->access$000(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;)Lcom/bianfeng/fastvo/audio/spx/SpeexListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 48
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$1;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;

    invoke-static {v0}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->access$000(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;)Lcom/bianfeng/fastvo/audio/spx/SpeexListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/spx/SpeexListener;->onError()V

    :cond_0
    return-void
.end method

.method public onStop()V
    .locals 1

    .line 40
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$1;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;

    invoke-static {v0}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->access$000(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;)Lcom/bianfeng/fastvo/audio/spx/SpeexListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 41
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$1;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;

    invoke-static {v0}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->access$000(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;)Lcom/bianfeng/fastvo/audio/spx/SpeexListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/spx/SpeexListener;->onStop()V

    :cond_0
    return-void
.end method
