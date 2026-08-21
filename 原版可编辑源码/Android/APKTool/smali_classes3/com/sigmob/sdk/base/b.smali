.class public Lcom/sigmob/sdk/base/b;
.super Ljava/lang/Object;


# instance fields
.field public volatile a:I

.field public volatile b:I

.field public volatile c:I

.field public volatile d:I

.field public volatile e:I

.field public volatile f:I

.field public volatile g:I

.field public volatile h:I

.field public volatile i:J


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/base/b;->a:I

    iput v0, p0, Lcom/sigmob/sdk/base/b;->b:I

    iput v0, p0, Lcom/sigmob/sdk/base/b;->c:I

    iput v0, p0, Lcom/sigmob/sdk/base/b;->d:I

    iput v0, p0, Lcom/sigmob/sdk/base/b;->e:I

    iput v0, p0, Lcom/sigmob/sdk/base/b;->f:I

    iput v0, p0, Lcom/sigmob/sdk/base/b;->g:I

    iput v0, p0, Lcom/sigmob/sdk/base/b;->h:I

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/sigmob/sdk/base/b;->i:J

    return-void
.end method


# virtual methods
.method public a()V
    .locals 2

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/base/b;->a:I

    iput v0, p0, Lcom/sigmob/sdk/base/b;->c:I

    iput v0, p0, Lcom/sigmob/sdk/base/b;->d:I

    iput v0, p0, Lcom/sigmob/sdk/base/b;->f:I

    iput v0, p0, Lcom/sigmob/sdk/base/b;->e:I

    iput v0, p0, Lcom/sigmob/sdk/base/b;->g:I

    iput v0, p0, Lcom/sigmob/sdk/base/b;->b:I

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/sigmob/sdk/base/b;->i:J

    return-void
.end method
