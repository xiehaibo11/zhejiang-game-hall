.class Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;
.super Ljava/lang/Object;
.source "FastVoiceInterface.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->onAllowAll(I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;)V
    .locals 0

    .line 114
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;->this$1:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 118
    new-instance v0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1$1;-><init>(Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;)V

    invoke-static {v0}, Lcom/bianfeng/fastvo/FastVoice;->startRecord(Lcom/bianfeng/fastvo/audio/RecordCallback;)V

    return-void
.end method
