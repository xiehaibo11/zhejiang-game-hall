.class public final Lcom/kwad/sdk/core/b/a/gh;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;Lorg/json/JSONObject;)V
    .locals 5

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "weakStyleIcon"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleIcon:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleIcon:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleIcon:Ljava/lang/String;

    :cond_1
    const-string v0, "weakStyleTitle"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleTitle:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleTitle:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleTitle:Ljava/lang/String;

    :cond_2
    const-string v0, "weakStyleDownloadingTitle"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleDownloadingTitle:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleDownloadingTitle:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleDownloadingTitle:Ljava/lang/String;

    :cond_3
    const-string v0, "weakStyleAdMark"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleAdMark:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleAdMark:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleAdMark:Ljava/lang/String;

    :cond_4
    const-string v0, "weakStyleAppearTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleAppearTime:J

    new-instance v0, Ljava/lang/Boolean;

    const-string v1, "true"

    invoke-direct {v0, v1}, Ljava/lang/Boolean;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    const-string v3, "weakStyleEnableClose"

    invoke-virtual {p1, v3, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleEnableClose:Z

    const-string v0, "typePortrait"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->typePortrait:I

    const-string v0, "strongStyleCardUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleCardUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleCardUrl:Ljava/lang/String;

    sget-object v3, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v3, :cond_5

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleCardUrl:Ljava/lang/String;

    :cond_5
    const-string v0, "strongStyleAppearTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    iput-wide v3, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleAppearTime:J

    const-string v0, "strongStyleTitle"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleTitle:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleTitle:Ljava/lang/String;

    sget-object v3, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v3, :cond_6

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleTitle:Ljava/lang/String;

    :cond_6
    const-string v0, "strongStyleSubTitle"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleSubTitle:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleSubTitle:Ljava/lang/String;

    sget-object v3, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v3, :cond_7

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleSubTitle:Ljava/lang/String;

    :cond_7
    const-string v0, "strongStyleAdMark"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleAdMark:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleAdMark:Ljava/lang/String;

    sget-object v3, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v3, :cond_8

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleAdMark:Ljava/lang/String;

    :cond_8
    new-instance v0, Ljava/lang/Boolean;

    invoke-direct {v0, v1}, Ljava/lang/Boolean;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    const-string v1, "strongStyleEnableClose"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleEnableClose:Z

    const-string v0, "weakStyleShowTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleShowTime:J

    const-string v0, "strongStyleShowTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleShowTime:J

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleIcon:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleIcon:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleIcon:Ljava/lang/String;

    const-string v2, "weakStyleIcon"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleTitle:Ljava/lang/String;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleTitle:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleTitle:Ljava/lang/String;

    const-string v2, "weakStyleTitle"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleDownloadingTitle:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleDownloadingTitle:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleDownloadingTitle:Ljava/lang/String;

    const-string v2, "weakStyleDownloadingTitle"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleAdMark:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleAdMark:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleAdMark:Ljava/lang/String;

    const-string v2, "weakStyleAdMark"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleAppearTime:J

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-eqz v0, :cond_5

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleAppearTime:J

    const-string v0, "weakStyleAppearTime"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_5
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleEnableClose:Z

    const-string v2, "weakStyleEnableClose"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->typePortrait:I

    if-eqz v0, :cond_6

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->typePortrait:I

    const-string v2, "typePortrait"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_6
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleCardUrl:Ljava/lang/String;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleCardUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleCardUrl:Ljava/lang/String;

    const-string v2, "strongStyleCardUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleAppearTime:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_8

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleAppearTime:J

    const-string v0, "strongStyleAppearTime"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_8
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleTitle:Ljava/lang/String;

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleTitle:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_9

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleTitle:Ljava/lang/String;

    const-string v2, "strongStyleTitle"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_9
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleSubTitle:Ljava/lang/String;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleSubTitle:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleSubTitle:Ljava/lang/String;

    const-string v2, "strongStyleSubTitle"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleAdMark:Ljava/lang/String;

    if-eqz v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleAdMark:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleAdMark:Ljava/lang/String;

    const-string v1, "strongStyleAdMark"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleEnableClose:Z

    const-string v1, "strongStyleEnableClose"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleShowTime:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_c

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->weakStyleShowTime:J

    const-string v2, "weakStyleShowTime"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_c
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleShowTime:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_d

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;->strongStyleShowTime:J

    const-string p0, "strongStyleShowTime"

    invoke-static {p1, p0, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_d
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/gh;->a(Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/gh;->b(Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$PatchAdInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
