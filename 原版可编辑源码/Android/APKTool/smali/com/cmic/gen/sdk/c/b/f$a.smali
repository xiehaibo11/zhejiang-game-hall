.class public Lcom/cmic/gen/sdk/c/b/f$a;
.super Ljava/lang/Object;
.source "LogReportParameter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/cmic/gen/sdk/c/b/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private a:Lorg/json/JSONObject;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 106
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()Lorg/json/JSONObject;
    .locals 1

    .line 114
    iget-object v0, p0, Lcom/cmic/gen/sdk/c/b/f$a;->a:Lorg/json/JSONObject;

    return-object v0
.end method

.method public a(Lorg/json/JSONObject;)V
    .locals 0

    .line 118
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/b/f$a;->a:Lorg/json/JSONObject;

    return-void
.end method
