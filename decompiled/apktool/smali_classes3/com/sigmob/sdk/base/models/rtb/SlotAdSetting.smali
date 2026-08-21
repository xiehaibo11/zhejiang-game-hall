.class public final Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$ProtoAdapter_SlotAdSetting;,
        Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;",
        "Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_DISABLE_X_REQUESTED_WITH:Ljava/lang/Boolean;

.field public static final DEFAULT_RETRY_COUNT:Ljava/lang/Integer;

.field private static final serialVersionUID:J


# instance fields
.field public final disable_x_requested_with:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x5
    .end annotation
.end field

.field public final native_setting:Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.NativeAdSetting#ADAPTER"
        tag = 0x3
    .end annotation
.end field

.field public final retry_count:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x4
    .end annotation
.end field

.field public final rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.RvAdSetting#ADAPTER"
        tag = 0x1
    .end annotation
.end field

.field public final splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.SplashAdSetting#ADAPTER"
        tag = 0x2
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$ProtoAdapter_SlotAdSetting;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$ProtoAdapter_SlotAdSetting;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->DEFAULT_RETRY_COUNT:Ljava/lang/Integer;

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->DEFAULT_DISABLE_X_REQUESTED_WITH:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;Ljava/lang/Integer;Ljava/lang/Boolean;)V
    .locals 7

    sget-object v6, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    invoke-direct/range {v0 .. v6}, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;-><init>(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p6}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    iput-object p2, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    iput-object p3, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->native_setting:Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    iput-object p4, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->retry_count:Ljava/lang/Integer;

    iput-object p5, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->disable_x_requested_with:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->native_setting:Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->native_setting:Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->retry_count:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->retry_count:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->disable_x_requested_with:Ljava/lang/Boolean;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->disable_x_requested_with:Ljava/lang/Boolean;

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

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->native_setting:Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->retry_count:Ljava/lang/Integer;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->disable_x_requested_with:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v2

    :cond_4
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_5
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->native_setting:Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->native_setting:Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->retry_count:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->retry_count:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->disable_x_requested_with:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->disable_x_requested_with:Ljava/lang/Boolean;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    if-eqz v1, :cond_0

    const-string v1, ", rv_setting="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    if-eqz v1, :cond_1

    const-string v1, ", splash_setting="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->native_setting:Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    if-eqz v1, :cond_2

    const-string v1, ", native_setting="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->native_setting:Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->retry_count:Ljava/lang/Integer;

    if-eqz v1, :cond_3

    const-string v1, ", retry_count="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->retry_count:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->disable_x_requested_with:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    const-string v1, ", disable_x_requested_with="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/SlotAdSetting;->disable_x_requested_with:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "SlotAdSetting{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
