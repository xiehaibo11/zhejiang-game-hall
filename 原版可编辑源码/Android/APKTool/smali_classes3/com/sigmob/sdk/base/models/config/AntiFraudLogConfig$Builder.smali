.class public final Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;",
        "Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public events:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    invoke-static {}, Lcom/czhj/wire/internal/Internal;->newMutableList()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;->events:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;->build()Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    move-result-object v0

    return-object v0
.end method

.method public build()Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;
    .locals 4

    new-instance v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;->events:Ljava/util/List;

    invoke-super {p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;-><init>(Lcom/sigmob/sdk/base/models/config/MotionConfig;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-object v0
.end method

.method public events(Ljava/util/List;)Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/wire/internal/Internal;->checkElementsNotNull(Ljava/util/List;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;->events:Ljava/util/List;

    return-object p0
.end method

.method public motion_config(Lcom/sigmob/sdk/base/models/config/MotionConfig;)Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    return-object p0
.end method
