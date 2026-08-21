.class public final Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/config/MotionConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/config/MotionConfig;",
        "Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public count:Ljava/lang/Integer;

.field public interval:Ljava/lang/Integer;

.field public queue_max:Ljava/lang/Integer;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/models/config/MotionConfig;->DEFAULT_INTERVAL:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;->interval:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/MotionConfig;->DEFAULT_QUEUE_MAX:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;->queue_max:Ljava/lang/Integer;

    sget-object v0, Lcom/sigmob/sdk/base/models/config/MotionConfig;->DEFAULT_COUNT:Ljava/lang/Integer;

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;->count:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;->build()Lcom/sigmob/sdk/base/models/config/MotionConfig;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/config/MotionConfig;
    .locals 5

    new-instance v0, Lcom/sigmob/sdk/base/models/config/MotionConfig;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;->interval:Ljava/lang/Integer;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;->queue_max:Ljava/lang/Integer;

    iget-object v3, p0, Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;->count:Ljava/lang/Integer;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v4

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/sigmob/sdk/base/models/config/MotionConfig;-><init>(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public count(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;->count:Ljava/lang/Integer;

    return-object p0
.end method

.method public interval(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;->interval:Ljava/lang/Integer;

    return-object p0
.end method

.method public queue_max(Ljava/lang/Integer;)Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/MotionConfig$Builder;->queue_max:Ljava/lang/Integer;

    return-object p0
.end method
