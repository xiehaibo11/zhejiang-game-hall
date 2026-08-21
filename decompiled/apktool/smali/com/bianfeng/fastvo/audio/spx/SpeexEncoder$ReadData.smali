.class Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;
.super Ljava/lang/Object;
.source "SpeexEncoder.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "ReadData"
.end annotation


# instance fields
.field private ready:[S

.field private size:I

.field final synthetic this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;


# direct methods
.method constructor <init>(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;)V
    .locals 0

    .line 100
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 102
    sget p1, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->encoder_packagesize:I

    new-array p1, p1, [S

    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;->ready:[S

    return-void
.end method

.method static synthetic access$100(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;)[S
    .locals 0

    .line 100
    iget-object p0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;->ready:[S

    return-object p0
.end method

.method static synthetic access$200(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;)I
    .locals 0

    .line 100
    iget p0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;->size:I

    return p0
.end method

.method static synthetic access$202(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;I)I
    .locals 0

    .line 100
    iput p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;->size:I

    return p1
.end method
