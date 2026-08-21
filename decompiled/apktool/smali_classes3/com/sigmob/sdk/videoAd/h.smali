.class public Lcom/sigmob/sdk/videoAd/h;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/videoAd/h$a;
    }
.end annotation


# static fields
.field private static final serialVersionUID:J


# instance fields
.field private final a:I

.field private final b:I

.field private final c:Lcom/sigmob/sdk/base/views/k;

.field private final d:I

.field private e:Ljava/lang/String;

.field private f:Lcom/sigmob/sdk/videoAd/h$a;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:I

.field private j:Z

.field private k:Lcom/sigmob/sdk/videoAd/a;


# direct methods
.method constructor <init>(IIILjava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/views/k;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoAd/h;->j:Z

    iput p1, p0, Lcom/sigmob/sdk/videoAd/h;->a:I

    iput p2, p0, Lcom/sigmob/sdk/videoAd/h;->b:I

    iput p3, p0, Lcom/sigmob/sdk/videoAd/h;->d:I

    iput-object p5, p0, Lcom/sigmob/sdk/videoAd/h;->h:Ljava/lang/String;

    iput-object p4, p0, Lcom/sigmob/sdk/videoAd/h;->g:Ljava/lang/String;

    iput-object p6, p0, Lcom/sigmob/sdk/videoAd/h;->c:Lcom/sigmob/sdk/base/views/k;

    return-void
.end method

.method private a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/a;)V
    .locals 0

    return-void
.end method


# virtual methods
.method public a()Lcom/sigmob/sdk/base/views/k;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/h;->c:Lcom/sigmob/sdk/base/views/k;

    return-object v0
.end method

.method public a(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/videoAd/h;->i:I

    return-void
.end method

.method public a(Lcom/sigmob/sdk/videoAd/a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/h;->k:Lcom/sigmob/sdk/videoAd/a;

    return-void
.end method

.method public a(Lcom/sigmob/sdk/videoAd/h$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/h;->f:Lcom/sigmob/sdk/videoAd/h$a;

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/h;->h:Ljava/lang/String;

    return-void
.end method

.method public b()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/h;->h:Ljava/lang/String;

    return-object v0
.end method

.method public c()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoAd/h;->a:I

    return v0
.end method

.method public d()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoAd/h;->b:I

    return v0
.end method
