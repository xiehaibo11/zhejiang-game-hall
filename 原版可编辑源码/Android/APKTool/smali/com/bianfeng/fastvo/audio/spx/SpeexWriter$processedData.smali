.class Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;
.super Ljava/lang/Object;
.source "SpeexWriter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "processedData"
.end annotation


# instance fields
.field private processed:[B

.field private size:I

.field final synthetic this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;


# direct methods
.method constructor <init>(Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;)V
    .locals 0

    .line 91
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 93
    sget p1, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->write_packageSize:I

    new-array p1, p1, [B

    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;->processed:[B

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;)[B
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;->processed:[B

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;)I
    .locals 0

    .line 91
    iget p0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;->size:I

    return p0
.end method

.method static synthetic access$102(Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;I)I
    .locals 0

    .line 91
    iput p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;->size:I

    return p1
.end method
