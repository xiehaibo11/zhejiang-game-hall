.class public final Lcom/loc/br$b;
.super Ljava/lang/Object;
.source "HttpUrlUtil.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/br;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# instance fields
.field public a:Ljava/net/HttpURLConnection;

.field public b:I


# direct methods
.method public constructor <init>(Ljava/net/HttpURLConnection;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/loc/br$b;->a:Ljava/net/HttpURLConnection;

    iget p1, p0, Lcom/loc/br$b;->b:I

    iput p1, p0, Lcom/loc/br$b;->b:I

    return-void
.end method
