.class public final Lcom/kwad/sdk/core/response/model/b;
.super Ljava/lang/Object;


# instance fields
.field private SH:Z

.field private auG:Z

.field private mHeight:I

.field private mUrl:Ljava/lang/String;

.field private mWidth:I


# direct methods
.method public constructor <init>(Ljava/lang/String;IIZZ)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/response/model/b;->mUrl:Ljava/lang/String;

    iput p2, p0, Lcom/kwad/sdk/core/response/model/b;->mWidth:I

    iput p3, p0, Lcom/kwad/sdk/core/response/model/b;->mHeight:I

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/sdk/core/response/model/b;->SH:Z

    iput-boolean p5, p0, Lcom/kwad/sdk/core/response/model/b;->auG:Z

    return-void
.end method


# virtual methods
.method public final getHeight()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/core/response/model/b;->mHeight:I

    return v0
.end method

.method public final getUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/b;->mUrl:Ljava/lang/String;

    return-object v0
.end method

.method public final getWidth()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/core/response/model/b;->mWidth:I

    return v0
.end method
