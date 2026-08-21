.class public Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;
.super Ljava/lang/Object;
.source "YmnAliWebpayEntity.java"


# instance fields
.field private base64_html:Ljava/lang/String;

.field private charset:Ljava/lang/String;

.field private url_starts_with:Ljava/lang/String;

.field private web_open_type:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getBase64_html()Ljava/lang/String;
    .locals 3

    .line 13
    new-instance v0, Ljava/lang/String;

    iget-object v1, p0, Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;->base64_html:Ljava/lang/String;

    const/4 v2, 0x2

    invoke-static {v1, v2}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/String;-><init>([B)V

    return-object v0
.end method

.method public getCharset()Ljava/lang/String;
    .locals 1

    .line 21
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;->charset:Ljava/lang/String;

    return-object v0
.end method

.method public getUrl_starts_with()Ljava/lang/String;
    .locals 1

    .line 29
    iget-object v0, p0, Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;->url_starts_with:Ljava/lang/String;

    return-object v0
.end method

.method public getWeb_open_type()I
    .locals 1

    .line 37
    iget v0, p0, Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;->web_open_type:I

    return v0
.end method

.method public setBase64_html(Ljava/lang/String;)V
    .locals 0

    .line 17
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;->base64_html:Ljava/lang/String;

    return-void
.end method

.method public setCharset(Ljava/lang/String;)V
    .locals 0

    .line 25
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;->charset:Ljava/lang/String;

    return-void
.end method

.method public setUrl_starts_with(Ljava/lang/String;)V
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;->url_starts_with:Ljava/lang/String;

    return-void
.end method

.method public setWeb_open_type(I)V
    .locals 0

    .line 41
    iput p1, p0, Lcom/bianfeng/paylib/entity/YmnAliWebpayEntity;->web_open_type:I

    return-void
.end method
