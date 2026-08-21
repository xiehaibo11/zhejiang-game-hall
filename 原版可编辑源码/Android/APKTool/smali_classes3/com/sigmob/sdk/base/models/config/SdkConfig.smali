.class public final Lcom/sigmob/sdk/base/models/config/SdkConfig;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/config/SdkConfig$ProtoAdapter_SdkConfig;,
        Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/config/SdkConfig;",
        "Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/config/SdkConfig;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/config/SdkConfig;",
            ">;"
        }
    .end annotation
.end field

.field private static final serialVersionUID:J


# instance fields
.field public final android_config:Lcom/sigmob/sdk/base/models/config/Android;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.Android#ADAPTER"
        tag = 0x3
    .end annotation
.end field

.field public final common_config:Lcom/sigmob/sdk/base/models/config/Common;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.Common#ADAPTER"
        tag = 0x1
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/models/config/SdkConfig$ProtoAdapter_SdkConfig;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/SdkConfig$ProtoAdapter_SdkConfig;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>(Lcom/sigmob/sdk/base/models/config/Common;Lcom/sigmob/sdk/base/models/config/Android;)V
    .locals 1

    sget-object v0, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    invoke-direct {p0, p1, p2, v0}, Lcom/sigmob/sdk/base/models/config/SdkConfig;-><init>(Lcom/sigmob/sdk/base/models/config/Common;Lcom/sigmob/sdk/base/models/config/Android;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Lcom/sigmob/sdk/base/models/config/Common;Lcom/sigmob/sdk/base/models/config/Android;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p3}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->common_config:Lcom/sigmob/sdk/base/models/config/Common;

    iput-object p2, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->android_config:Lcom/sigmob/sdk/base/models/config/Android;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/config/SdkConfig;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/config/SdkConfig;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/SdkConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/config/SdkConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->common_config:Lcom/sigmob/sdk/base/models/config/Common;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/config/SdkConfig;->common_config:Lcom/sigmob/sdk/base/models/config/Common;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->android_config:Lcom/sigmob/sdk/base/models/config/Android;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/config/SdkConfig;->android_config:Lcom/sigmob/sdk/base/models/config/Android;

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

    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/SdkConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->common_config:Lcom/sigmob/sdk/base/models/config/Common;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/config/Common;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->android_config:Lcom/sigmob/sdk/base/models/config/Android;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/config/Android;->hashCode()I

    move-result v2

    :cond_1
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_2
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/SdkConfig;->newBuilder()Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->common_config:Lcom/sigmob/sdk/base/models/config/Common;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;->common_config:Lcom/sigmob/sdk/base/models/config/Common;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->android_config:Lcom/sigmob/sdk/base/models/config/Android;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;->android_config:Lcom/sigmob/sdk/base/models/config/Android;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/config/SdkConfig;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/config/SdkConfig$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->common_config:Lcom/sigmob/sdk/base/models/config/Common;

    if-eqz v1, :cond_0

    const-string v1, ", common_config="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->common_config:Lcom/sigmob/sdk/base/models/config/Common;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->android_config:Lcom/sigmob/sdk/base/models/config/Android;

    if-eqz v1, :cond_1

    const-string v1, ", android_config="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/config/SdkConfig;->android_config:Lcom/sigmob/sdk/base/models/config/Android;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "SdkConfig{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
