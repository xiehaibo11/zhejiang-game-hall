.class public final Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$ProtoAdapter_AntiFraudLogConfig;,
        Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;",
        "Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;",
            ">;"
        }
    .end annotation
.end field

.field private static final serialVersionUID:J


# instance fields
.field public final events:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x2
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public final motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.MotionConfig#ADAPTER"
        tag = 0x1
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$ProtoAdapter_AntiFraudLogConfig;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$ProtoAdapter_AntiFraudLogConfig;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>(Lcom/sigmob/sdk/base/models/config/MotionConfig;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/sigmob/sdk/base/models/config/MotionConfig;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    sget-object v0, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct {p0, p1, p2, v0}, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;-><init>(Lcom/sigmob/sdk/base/models/config/MotionConfig;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Lcom/sigmob/sdk/base/models/config/MotionConfig;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/sigmob/sdk/base/models/config/MotionConfig;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Lcom/czhj/wire/okio/ByteString;",
            ")V"
        }
    .end annotation

    sget-object v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p3}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    const-string p1, "events"

    invoke-static {p1, p2}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->events:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->events:Ljava/util/List;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->events:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    goto :goto_0

    :cond_2
    move v0, v2

    :goto_0
    return v0
.end method

.method public hashCode()I
    .locals 2

    iget v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/config/MotionConfig;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->events:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_1
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->newBuilder()Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->events:Ljava/util/List;

    const-string v2, "events"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;->events:Ljava/util/List;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    if-eqz v1, :cond_0

    const-string v1, ", motion_config="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->motion_config:Lcom/sigmob/sdk/base/models/config/MotionConfig;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->events:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, ", events="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/AntiFraudLogConfig;->events:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "AntiFraudLogConfig{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
