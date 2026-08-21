.class public final Lcom/sigmob/sdk/base/models/rtb/AdSetting;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/rtb/AdSetting$ProtoAdapter_AdSetting;,
        Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/rtb/AdSetting;",
        "Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/rtb/AdSetting;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/rtb/AdSetting;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_DISABLE_DOWNLOAD_LISTENER:Ljava/lang/Boolean;

.field public static final DEFAULT_IN_APP:Ljava/lang/Boolean;

.field public static final DEFAULT_RETRY_COUNT:Ljava/lang/Integer;

.field private static final serialVersionUID:J


# instance fields
.field public final disable_download_listener:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x7
    .end annotation
.end field

.field public final in_app:Ljava/lang/Boolean;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#BOOL"
        tag = 0x5
    .end annotation
.end field

.field public final retry_count:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x3
    .end annotation
.end field

.field public final rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.RvAdSetting#ADAPTER"
        tag = 0x1
    .end annotation
.end field

.field public final scheme_white_list:Ljava/util/List;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#STRING"
        label = .enum Lcom/czhj/wire/WireField$Label;->REPEATED:Lcom/czhj/wire/WireField$Label;
        tag = 0x8
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public final single_native_setting:Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting#ADAPTER"
        tag = 0x4
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

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$ProtoAdapter_AdSetting;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/AdSetting$ProtoAdapter_AdSetting;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->DEFAULT_RETRY_COUNT:Ljava/lang/Integer;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->DEFAULT_IN_APP:Ljava/lang/Boolean;

    sput-object v1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->DEFAULT_DISABLE_DOWNLOAD_LISTENER:Ljava/lang/Boolean;

    return-void
.end method

.method public constructor <init>(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/util/List;)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;",
            "Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;",
            "Ljava/lang/Integer;",
            "Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    sget-object v8, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    move-object v6, p6

    move-object/from16 v7, p7

    invoke-direct/range {v0 .. v8}, Lcom/sigmob/sdk/base/models/rtb/AdSetting;-><init>(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;Ljava/lang/Integer;Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/util/List;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;",
            "Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;",
            "Ljava/lang/Integer;",
            "Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;",
            "Ljava/lang/Boolean;",
            "Ljava/lang/Boolean;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Lcom/czhj/wire/okio/ByteString;",
            ")V"
        }
    .end annotation

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p8}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    iput-object p2, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    iput-object p3, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->retry_count:Ljava/lang/Integer;

    iput-object p4, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->single_native_setting:Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

    iput-object p5, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->in_app:Ljava/lang/Boolean;

    iput-object p6, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->disable_download_listener:Ljava/lang/Boolean;

    const-string p1, "scheme_white_list"

    invoke-static {p1, p7}, Lcom/czhj/wire/internal/Internal;->immutableCopyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->scheme_white_list:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->retry_count:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->retry_count:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->single_native_setting:Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->single_native_setting:Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->in_app:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->in_app:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->disable_download_listener:Ljava/lang/Boolean;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->disable_download_listener:Ljava/lang/Boolean;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->scheme_white_list:Ljava/util/List;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->scheme_white_list:Ljava/util/List;

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
    .locals 3

    iget v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    if-nez v0, :cond_6

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

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

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->retry_count:Ljava/lang/Integer;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->single_native_setting:Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->in_app:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->disable_download_listener:Ljava/lang/Boolean;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/Boolean;->hashCode()I

    move-result v2

    :cond_5
    add-int/2addr v0, v2

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->scheme_white_list:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_6
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->retry_count:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->retry_count:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->single_native_setting:Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->single_native_setting:Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->in_app:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->in_app:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->disable_download_listener:Ljava/lang/Boolean;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->disable_download_listener:Ljava/lang/Boolean;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->scheme_white_list:Ljava/util/List;

    const-string v2, "scheme_white_list"

    invoke-static {v2, v1}, Lcom/czhj/wire/internal/Internal;->copyOf(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->scheme_white_list:Ljava/util/List;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/rtb/AdSetting$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    if-eqz v1, :cond_0

    const-string v1, ", rv_setting="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->rv_setting:Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    if-eqz v1, :cond_1

    const-string v1, ", splash_setting="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->splash_setting:Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->retry_count:Ljava/lang/Integer;

    if-eqz v1, :cond_2

    const-string v1, ", retry_count="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->retry_count:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->single_native_setting:Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

    if-eqz v1, :cond_3

    const-string v1, ", single_native_setting="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->single_native_setting:Lcom/sigmob/sdk/base/models/rtb/SingleNativeAdSetting;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->in_app:Ljava/lang/Boolean;

    if-eqz v1, :cond_4

    const-string v1, ", in_app="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->in_app:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->disable_download_listener:Ljava/lang/Boolean;

    if-eqz v1, :cond_5

    const-string v1, ", disable_download_listener="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->disable_download_listener:Ljava/lang/Boolean;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->scheme_white_list:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_6

    const-string v1, ", scheme_white_list="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/AdSetting;->scheme_white_list:Ljava/util/List;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_6
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "AdSetting{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
