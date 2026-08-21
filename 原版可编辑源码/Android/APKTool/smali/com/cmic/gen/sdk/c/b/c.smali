.class public Lcom/cmic/gen/sdk/c/b/c;
.super Lcom/cmic/gen/sdk/c/b/g;
.source "GetOtherPhoneNumber.java"


# instance fields
.field private final a:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 13
    invoke-direct {p0}, Lcom/cmic/gen/sdk/c/b/g;-><init>()V

    .line 14
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/c;->a:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    .line 19
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/c;->a:Ljava/lang/String;

    return-object v0
.end method

.method protected a_(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x0

    return-object p1
.end method

.method public b()Lorg/json/JSONObject;
    .locals 1

    .line 24
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    return-object v0
.end method
