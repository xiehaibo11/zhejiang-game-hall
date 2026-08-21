.class public final Lcom/czhj/sdk/common/models/DeviceId$Builder;
.super Lcom/czhj/wire/Message$Builder;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/sdk/common/models/DeviceId;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/czhj/wire/Message$Builder<",
        "Lcom/czhj/sdk/common/models/DeviceId;",
        "Lcom/czhj/sdk/common/models/DeviceId$Builder;",
        ">;"
    }
.end annotation


# instance fields
.field public aaid:Ljava/lang/String;

.field public android_id:Ljava/lang/String;

.field public android_id_md5:Ljava/lang/String;

.field public android_uuid:Ljava/lang/String;

.field public brand:Ljava/lang/String;

.field public gaid:Ljava/lang/String;

.field public gaid_md5:Ljava/lang/String;

.field public idfa:Ljava/lang/String;

.field public idfa_md5:Ljava/lang/String;

.field public imei:Ljava/lang/String;

.field public imei1:Ljava/lang/String;

.field public imei1_md5:Ljava/lang/String;

.field public imei2:Ljava/lang/String;

.field public imei2_md5:Ljava/lang/String;

.field public imei_md5:Ljava/lang/String;

.field public imsi:Ljava/lang/String;

.field public is_custom_android_id:Ljava/lang/Boolean;

.field public is_custom_idfa:Ljava/lang/Boolean;

.field public is_custom_imei:Ljava/lang/Boolean;

.field public is_custom_oaid:Ljava/lang/Boolean;

.field public msa_udid:Ljava/lang/String;

.field public oaid:Ljava/lang/String;

.field public oaid_md5:Ljava/lang/String;

.field public udid:Ljava/lang/String;

.field public uid:Ljava/lang/String;

.field public user_id:Ljava/lang/String;

.field public vaid:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/czhj/wire/Message$Builder;-><init>()V

    const-string v0, ""

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->idfa:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->udid:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->user_id:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->android_id:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->android_uuid:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imsi:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->gaid:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->uid:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->brand:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei1:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei2:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->oaid:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->vaid:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->aaid:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->msa_udid:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->idfa_md5:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei_md5:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->android_id_md5:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->gaid_md5:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->oaid_md5:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei1_md5:Ljava/lang/String;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei2_md5:Ljava/lang/String;

    sget-object v0, Lcom/czhj/sdk/common/models/DeviceId;->DEFAULT_IS_CUSTOM_IMEI:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_imei:Ljava/lang/Boolean;

    sget-object v0, Lcom/czhj/sdk/common/models/DeviceId;->DEFAULT_IS_CUSTOM_OAID:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_oaid:Ljava/lang/Boolean;

    sget-object v0, Lcom/czhj/sdk/common/models/DeviceId;->DEFAULT_IS_CUSTOM_IDFA:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_idfa:Ljava/lang/Boolean;

    sget-object v0, Lcom/czhj/sdk/common/models/DeviceId;->DEFAULT_IS_CUSTOM_ANDROID_ID:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_android_id:Ljava/lang/Boolean;

    return-void
.end method


# virtual methods
.method public aaid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->aaid:Ljava/lang/String;

    return-object p0
.end method

.method public android_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->android_id:Ljava/lang/String;

    return-object p0
.end method

.method public android_id_md5(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->android_id_md5:Ljava/lang/String;

    return-object p0
.end method

.method public android_uuid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->android_uuid:Ljava/lang/String;

    return-object p0
.end method

.method public brand(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->brand:Ljava/lang/String;

    return-object p0
.end method

.method public build()Lcom/czhj/sdk/common/models/DeviceId;
    .locals 32

    move-object/from16 v0, p0

    new-instance v30, Lcom/czhj/sdk/common/models/DeviceId;

    move-object/from16 v1, v30

    iget-object v2, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->idfa:Ljava/lang/String;

    iget-object v3, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->udid:Ljava/lang/String;

    iget-object v4, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->user_id:Ljava/lang/String;

    iget-object v5, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei:Ljava/lang/String;

    iget-object v6, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->android_id:Ljava/lang/String;

    iget-object v7, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->android_uuid:Ljava/lang/String;

    iget-object v8, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imsi:Ljava/lang/String;

    iget-object v9, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->gaid:Ljava/lang/String;

    iget-object v10, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->uid:Ljava/lang/String;

    iget-object v11, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->brand:Ljava/lang/String;

    iget-object v12, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei1:Ljava/lang/String;

    iget-object v13, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei2:Ljava/lang/String;

    iget-object v14, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->oaid:Ljava/lang/String;

    iget-object v15, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->vaid:Ljava/lang/String;

    move-object/from16 v31, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->aaid:Ljava/lang/String;

    move-object/from16 v16, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->msa_udid:Ljava/lang/String;

    move-object/from16 v17, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->idfa_md5:Ljava/lang/String;

    move-object/from16 v18, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei_md5:Ljava/lang/String;

    move-object/from16 v19, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->android_id_md5:Ljava/lang/String;

    move-object/from16 v20, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->gaid_md5:Ljava/lang/String;

    move-object/from16 v21, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->oaid_md5:Ljava/lang/String;

    move-object/from16 v22, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei1_md5:Ljava/lang/String;

    move-object/from16 v23, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei2_md5:Ljava/lang/String;

    move-object/from16 v24, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_imei:Ljava/lang/Boolean;

    move-object/from16 v25, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_oaid:Ljava/lang/Boolean;

    move-object/from16 v26, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_idfa:Ljava/lang/Boolean;

    move-object/from16 v27, v1

    iget-object v1, v0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_android_id:Ljava/lang/Boolean;

    move-object/from16 v28, v1

    invoke-super/range {p0 .. p0}, Lcom/czhj/wire/Message$Builder;->buildUnknownFields()Lcom/czhj/wire/okio/ByteString;

    move-result-object v29

    move-object/from16 v1, v31

    invoke-direct/range {v1 .. v29}, Lcom/czhj/sdk/common/models/DeviceId;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Ljava/lang/Boolean;Lcom/czhj/wire/okio/ByteString;)V

    return-object v30
.end method

.method public bridge synthetic build()Lcom/czhj/wire/Message;
    .locals 1

    invoke-virtual {p0}, Lcom/czhj/sdk/common/models/DeviceId$Builder;->build()Lcom/czhj/sdk/common/models/DeviceId;

    move-result-object v0

    return-object v0
.end method

.method public gaid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->gaid:Ljava/lang/String;

    return-object p0
.end method

.method public gaid_md5(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->gaid_md5:Ljava/lang/String;

    return-object p0
.end method

.method public idfa(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->idfa:Ljava/lang/String;

    return-object p0
.end method

.method public idfa_md5(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->idfa_md5:Ljava/lang/String;

    return-object p0
.end method

.method public imei(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei:Ljava/lang/String;

    return-object p0
.end method

.method public imei1(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei1:Ljava/lang/String;

    return-object p0
.end method

.method public imei1_md5(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei1_md5:Ljava/lang/String;

    return-object p0
.end method

.method public imei2(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei2:Ljava/lang/String;

    return-object p0
.end method

.method public imei2_md5(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei2_md5:Ljava/lang/String;

    return-object p0
.end method

.method public imei_md5(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imei_md5:Ljava/lang/String;

    return-object p0
.end method

.method public imsi(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->imsi:Ljava/lang/String;

    return-object p0
.end method

.method public is_custom_android_id(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_android_id:Ljava/lang/Boolean;

    return-object p0
.end method

.method public is_custom_idfa(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_idfa:Ljava/lang/Boolean;

    return-object p0
.end method

.method public is_custom_imei(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_imei:Ljava/lang/Boolean;

    return-object p0
.end method

.method public is_custom_oaid(Ljava/lang/Boolean;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->is_custom_oaid:Ljava/lang/Boolean;

    return-object p0
.end method

.method public msa_udid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->msa_udid:Ljava/lang/String;

    return-object p0
.end method

.method public oaid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->oaid:Ljava/lang/String;

    return-object p0
.end method

.method public oaid_md5(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->oaid_md5:Ljava/lang/String;

    return-object p0
.end method

.method public udid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->udid:Ljava/lang/String;

    return-object p0
.end method

.method public uid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->uid:Ljava/lang/String;

    return-object p0
.end method

.method public user_id(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->user_id:Ljava/lang/String;

    return-object p0
.end method

.method public vaid(Ljava/lang/String;)Lcom/czhj/sdk/common/models/DeviceId$Builder;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/models/DeviceId$Builder;->vaid:Ljava/lang/String;

    return-object p0
.end method
