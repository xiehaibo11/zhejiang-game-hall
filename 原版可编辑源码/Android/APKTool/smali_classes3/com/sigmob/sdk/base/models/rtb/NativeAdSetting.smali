.class public final Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;
.super Lcom/czhj/wire/AndroidMessage;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$ProtoAdapter_NativeAdSetting;,
        Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/AndroidMessage<",
        "Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;",
        "Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;",
        ">;"
    }
.end annotation


# static fields
.field public static final ADAPTER:Lcom/czhj/wire/ProtoAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/czhj/wire/ProtoAdapter<",
            "Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;",
            ">;"
        }
    .end annotation
.end field

.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;",
            ">;"
        }
    .end annotation
.end field

.field public static final DEFAULT_DETAIL_PAGE_VIDEO_MUTE:Ljava/lang/Integer;

.field public static final DEFAULT_END_IMPRESSION_TIME:Ljava/lang/Integer;

.field public static final DEFAULT_IMPRESSION_PERCENT:Ljava/lang/Integer;

.field public static final DEFAULT_IMPRESSION_TIME:Ljava/lang/Integer;

.field public static final DEFAULT_PREVIEW_PAGE_VIDEO_MUTE:Ljava/lang/Integer;

.field public static final DEFAULT_VIDEO_AUTO_PLAY:Ljava/lang/Integer;

.field private static final serialVersionUID:J


# instance fields
.field public final detail_page_video_mute:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x3
    .end annotation
.end field

.field public final end_impression_time:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#INT32"
        tag = 0x6
    .end annotation
.end field

.field public final impression_percent:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x4
    .end annotation
.end field

.field public final impression_time:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x5
    .end annotation
.end field

.field public final preview_page_video_mute:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x2
    .end annotation
.end field

.field public final video_auto_play:Ljava/lang/Integer;
    .annotation runtime Lcom/czhj/wire/WireField;
        adapter = "com.squareup.wire.ProtoAdapter#UINT32"
        tag = 0x1
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$ProtoAdapter_NativeAdSetting;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$ProtoAdapter_NativeAdSetting;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-static {v0}, Lcom/czhj/wire/AndroidMessage;->newCreator(Lcom/czhj/wire/ProtoAdapter;)Landroid/os/Parcelable$Creator;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->CREATOR:Landroid/os/Parcelable$Creator;

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->DEFAULT_VIDEO_AUTO_PLAY:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->DEFAULT_PREVIEW_PAGE_VIDEO_MUTE:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->DEFAULT_DETAIL_PAGE_VIDEO_MUTE:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->DEFAULT_IMPRESSION_PERCENT:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->DEFAULT_IMPRESSION_TIME:Ljava/lang/Integer;

    sput-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->DEFAULT_END_IMPRESSION_TIME:Ljava/lang/Integer;

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;)V
    .locals 8

    sget-object v7, Lcom/czhj/wire/okio/ByteString;->EMPTY:Lcom/czhj/wire/okio/ByteString;

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    move-object v6, p6

    invoke-direct/range {v0 .. v7}, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;-><init>(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Lcom/czhj/wire/okio/ByteString;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->ADAPTER:Lcom/czhj/wire/ProtoAdapter;

    invoke-direct {p0, v0, p7}, Lcom/czhj/wire/AndroidMessage;-><init>(Lcom/czhj/wire/ProtoAdapter;Lcom/czhj/wire/okio/ByteString;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->video_auto_play:Ljava/lang/Integer;

    iput-object p2, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->preview_page_video_mute:Ljava/lang/Integer;

    iput-object p3, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->detail_page_video_mute:Ljava/lang/Integer;

    iput-object p4, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_percent:Ljava/lang/Integer;

    iput-object p5, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_time:Ljava/lang/Integer;

    iput-object p6, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->end_impression_time:Ljava/lang/Integer;

    return-void
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p1, p0, :cond_0

    return v0

    :cond_0
    instance-of v1, p1, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/czhj/wire/okio/ByteString;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->video_auto_play:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->video_auto_play:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->preview_page_video_mute:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->preview_page_video_mute:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->detail_page_video_mute:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->detail_page_video_mute:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_percent:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_percent:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_time:Ljava/lang/Integer;

    iget-object v3, p1, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_time:Ljava/lang/Integer;

    invoke-static {v1, v3}, Lcom/czhj/wire/internal/Internal;->equals(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->end_impression_time:Ljava/lang/Integer;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->end_impression_time:Ljava/lang/Integer;

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

    if-nez v0, :cond_6

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/ByteString;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->video_auto_play:Ljava/lang/Integer;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->preview_page_video_mute:Ljava/lang/Integer;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->detail_page_video_mute:Ljava/lang/Integer;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_2

    :cond_2
    move v1, v2

    :goto_2
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_percent:Ljava/lang/Integer;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_time:Ljava/lang/Integer;

    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v1

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x25

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->end_impression_time:Ljava/lang/Integer;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Ljava/lang/Integer;->hashCode()I

    move-result v2

    :cond_5
    add-int/2addr v0, v2

    iput v0, p0, Lcom/czhj/wire/AndroidMessage;->hashCode:I

    :cond_6
    return v0
.end method

.method public bridge synthetic newBuilder()Lcom/czhj/wire/Message$Builder;
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->newBuilder()Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;

    move-result-object v0

    return-object v0
.end method

.method public newBuilder()Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->video_auto_play:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->video_auto_play:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->preview_page_video_mute:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->preview_page_video_mute:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->detail_page_video_mute:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->detail_page_video_mute:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_percent:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->impression_percent:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_time:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->impression_time:Ljava/lang/Integer;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->end_impression_time:Ljava/lang/Integer;

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->end_impression_time:Ljava/lang/Integer;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->unknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting$Builder;->addUnknownFields(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/Message$Builder;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->video_auto_play:Ljava/lang/Integer;

    if-eqz v1, :cond_0

    const-string v1, ", video_auto_play="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->video_auto_play:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->preview_page_video_mute:Ljava/lang/Integer;

    if-eqz v1, :cond_1

    const-string v1, ", preview_page_video_mute="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->preview_page_video_mute:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->detail_page_video_mute:Ljava/lang/Integer;

    if-eqz v1, :cond_2

    const-string v1, ", detail_page_video_mute="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->detail_page_video_mute:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_percent:Ljava/lang/Integer;

    if-eqz v1, :cond_3

    const-string v1, ", impression_percent="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_percent:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_time:Ljava/lang/Integer;

    if-eqz v1, :cond_4

    const-string v1, ", impression_time="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->impression_time:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->end_impression_time:Ljava/lang/Integer;

    if-eqz v1, :cond_5

    const-string v1, ", end_impression_time="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/NativeAdSetting;->end_impression_time:Ljava/lang/Integer;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_5
    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "NativeAdSetting{"

    invoke-virtual {v0, v1, v2, v3}, Ljava/lang/StringBuilder;->replace(IILjava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v0

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
