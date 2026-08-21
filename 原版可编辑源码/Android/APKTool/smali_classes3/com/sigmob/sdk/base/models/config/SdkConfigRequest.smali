.class public final Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$ProtoAdapter_SdkConfigRequest;,
        Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;",
        "Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;",
            ">;"
        }
    .end annotation
.end field

.field private static final serialVersionUID:J


# instance fields
.field public final app:Lcom/czhj/sdk/common/models/App;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.common.models.sigdsp.pb.App#ADAPTER"
        tag = 0x1
    .end annotation
.end field

.field public final device:Lcom/czhj/sdk/common/models/Device;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.common.models.sigdsp.pb.Device#ADAPTER"
        tag = 0x2
    .end annotation
.end field

.field public final network:Lcom/czhj/sdk/common/models/Network;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.common.models.sigdsp.pb.Network#ADAPTER"
        tag = 0x3
    .end annotation
.end field

.field public final privacy:Lcom/czhj/sdk/common/models/Privacy;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.common.models.sigdsp.pb.Privacy#ADAPTER"
        tag = 0x4
    .end annotation
.end field

.field public final user:Lcom/czhj/sdk/common/models/User;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.common.models.sigdsp.pb.User#ADAPTER"
        tag = 0x5
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$ProtoAdapter_SdkConfigRequest;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$ProtoAdapter_SdkConfigRequest;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>(Lcom/czhj/sdk/common/models/App;Lcom/czhj/sdk/common/models/Device;Lcom/czhj/sdk/common/models/Network;Lcom/czhj/sdk/common/models/Privacy;Lcom/czhj/sdk/common/models/User;)V
    .locals 7

    sget-object v6, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    invoke-direct/range {v0 .. v6}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;-><init>(Lcom/czhj/sdk/common/models/App;Lcom/czhj/sdk/common/models/Device;Lcom/czhj/sdk/common/models/Network;Lcom/czhj/sdk/common/models/Privacy;Lcom/czhj/sdk/common/models/User;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Lcom/czhj/sdk/common/models/App;Lcom/czhj/sdk/common/models/Device;Lcom/czhj/sdk/common/models/Network;Lcom/czhj/sdk/common/models/Privacy;Lcom/czhj/sdk/common/models/User;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p6}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->app:Lcom/czhj/sdk/common/models/App;

    iput-object p2, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->device:Lcom/czhj/sdk/common/models/Device;

    iput-object p3, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->network:Lcom/czhj/sdk/common/models/Network;

    iput-object p4, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    iput-object p5, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->user:Lcom/czhj/sdk/common/models/User;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->app:Lcom/czhj/sdk/common/models/App;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->app:Lcom/czhj/sdk/common/models/App;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->device:Lcom/czhj/sdk/common/models/Device;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->device:Lcom/czhj/sdk/common/models/Device;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->network:Lcom/czhj/sdk/common/models/Network;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->network:Lcom/czhj/sdk/common/models/Network;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->user:Lcom/czhj/sdk/common/models/User;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->user:Lcom/czhj/sdk/common/models/User;

    invoke-static {v1, p1}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    goto :goto_0

    :cond_2
    move v0, v2

    :goto_0
    return v0
.end method

.method public hashCode()I
    .locals 3

    iget v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    if-nez v0, :cond_5

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->app:Lcom/czhj/sdk/common/models/App;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/App;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->device:Lcom/czhj/sdk/common/models/Device;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Device;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->network:Lcom/czhj/sdk/common/models/Network;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Network;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Privacy;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->user:Lcom/czhj/sdk/common/models/User;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/User;->hashCode()I

    move-result v2

    :cond_4
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_5
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->newBuilder()Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->app:Lcom/czhj/sdk/common/models/App;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->app:Lcom/czhj/sdk/common/models/App;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->device:Lcom/czhj/sdk/common/models/Device;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->device:Lcom/czhj/sdk/common/models/Device;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->network:Lcom/czhj/sdk/common/models/Network;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->network:Lcom/czhj/sdk/common/models/Network;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->user:Lcom/czhj/sdk/common/models/User;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->user:Lcom/czhj/sdk/common/models/User;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->app:Lcom/czhj/sdk/common/models/App;

    if-eqz v1, :cond_0

    const-string v1, ", app="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->app:Lcom/czhj/sdk/common/models/App;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->device:Lcom/czhj/sdk/common/models/Device;

    if-eqz v1, :cond_1

    const-string v1, ", device="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->device:Lcom/czhj/sdk/common/models/Device;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->network:Lcom/czhj/sdk/common/models/Network;

    if-eqz v1, :cond_2

    const-string v1, ", network="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->network:Lcom/czhj/sdk/common/models/Network;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    if-eqz v1, :cond_3

    const-string v1, ", privacy="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->privacy:Lcom/czhj/sdk/common/models/Privacy;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->user:Lcom/czhj/sdk/common/models/User;

    if-eqz v1, :cond_4

    const-string v1, ", user="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfigRequest;->user:Lcom/czhj/sdk/common/models/User;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "SdkConfigRequest{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
